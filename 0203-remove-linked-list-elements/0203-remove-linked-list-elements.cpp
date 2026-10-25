/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp,*slast,*nexti;
        temp=head;
        slast=NULL;
        nexti=NULL;
        if(head==NULL){
            return head;
        }
        if(head->val==val){
            nexti=head->next;
            head->next=NULL;
            head=nexti;
            temp=head;
        }
        while(temp!=NULL){
            if(temp->next==NULL){
                nexti=NULL;
            }
            else{
                nexti=temp->next;
            }
            if (temp->val == val) {
                if (slast == NULL) {
                    head = nexti;
                } else {
                    slast->next = nexti;
                }
                temp = nexti;
                continue;
            }

            slast=temp;
            temp=temp->next;
        }
        return head;
    }
};