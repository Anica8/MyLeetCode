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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        
        if(head->next==NULL && n==1) return NULL;
        ListNode* temp=head;
        ListNode* temp2=head;
        
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
            
        }
        int x=len-n-1;
        if(x<0){
            return head->next;
        }else{
        while(x){
            temp2=temp2->next;
            x--;
        }
        
        temp2->next=temp2->next->next;}
        return head;
    }
};