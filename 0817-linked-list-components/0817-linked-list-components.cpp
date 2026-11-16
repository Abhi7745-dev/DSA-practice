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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> st;
        ListNode *temp=head;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        while(temp!=NULL){
            if(st.find(temp->val)!=st.end()){
                if(temp->next==NULL || st.find(temp->next->val)==st.end()){
                    ans++;
                }
            }
            temp=temp->next;
        }
        return ans;
    }
};