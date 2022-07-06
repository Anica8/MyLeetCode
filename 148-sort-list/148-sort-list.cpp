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
    ListNode* sortList(ListNode* head) {
        ListNode* ans=new ListNode(-1);
        ListNode* ok=ans;
        vector<int>as;
        int c=0;
        while(head!=NULL){
            as.push_back(head->val);
            head=head->next;
        }
        
        sort(as.begin(),as.end());
        for(int i=0;i<as.size();i++){
            ok->next=new ListNode(as[i]);
            ok=ok->next;
        }
        return ans->next;
    }
};