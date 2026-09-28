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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *t1,*t2,*t3,*t4;
        t1=list1;
        t2=list1;
        int p=0,q=0;
        while(p!=a-1){
            t1=t1->next;
            p++;
        }
        while(q!=b+1){
            t2=t2->next;
            q++;
        }
        t4=list2;
        t3=list2;
        while(t4->next!=NULL){
            t4=t4->next;
        }
        
        t1->next=t3;
        t4->next=t2;

        return list1;


    }
};