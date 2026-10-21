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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        else if(head->next==NULL){
            return head;
        }
        else{
        ListNode *front=head->next;
        ListNode *back=head;
        while(front!=NULL){
            ListNode *temp;
            temp=new ListNode();
            temp->val=gcd(front->val,back->val);
            temp->next=front;
            back->next=temp;
            back=front;
            front=back->next;
        }
    }
        return head;
    }
};