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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *temp=NULL;
        if(head==NULL) return NULL;
        else if(head->next==NULL){
            return NULL;
        }
        else if(head->next->next==NULL){
            head->next=NULL;
            return head;
        }
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        temp->next=slow->next;

        return head;
    }
};