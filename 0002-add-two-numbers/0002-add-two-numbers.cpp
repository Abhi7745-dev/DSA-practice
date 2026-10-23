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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *temp1,*temp2,*slast;
        slast=NULL;
        temp1=l1;
        temp2=l2;
        while(temp1!=NULL && temp2!=NULL){
            int x=temp1->val+temp2->val+carry;
            carry=0;
            if(x<10){
                temp1->val=x;
            }
            else{
                
                temp1->val=x%10;
                carry=x/10;
            }
            slast=temp1;
            temp1=temp1->next;
            temp2=temp2->next;

        }
        if(temp1!=NULL){
        while(temp1!=NULL){
            int x=temp1->val+carry;
            carry=0;
            if(x<10){
                temp1->val=x;
            }
            else{
                temp1->val=x%10;
                carry=x/10;
            }
            slast=temp1;
            temp1=temp1->next;
            }
        }
        if(temp2!=NULL){
        while(temp2!=NULL){
            int x=temp2->val+carry;
            carry=0;
            if(temp1==NULL){
                ListNode *newnode;
                newnode=new ListNode();
                newnode->next=NULL;
                slast->next=newnode;
                temp1=newnode;
            }
            if(x<10){
                temp1->val=x;
            }
            else{
                temp1->val=x%10;
                carry=x/10;
            }
            temp2=temp2->next;
            slast=temp1;
            temp1=temp1->next;
            }
        }
        if(carry!=0){
            ListNode *newnode;
            newnode=new ListNode();
            newnode->val=carry;
            newnode->next=NULL;
            slast->next=newnode;
            temp1=newnode;
            
        }


        return l1;
    }
};