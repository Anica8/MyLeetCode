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
        ListNode* prev=NULL, *curr=l1, *next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        ListNode* prev1=NULL, *curr1=l2, *next1=NULL;
        
        while(curr1!=NULL){
            next1=curr1->next;
            curr1->next=prev1;
            prev1=curr1;
            curr1=next1;
        }
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        int carry=0;
        while(prev!=NULL || prev1!=NULL || carry){
            int sum=0;
            if(prev!=NULL){
                sum+=prev->val;
                prev=prev->next;
            }
            
            if(prev1!=NULL){
                sum+=prev1->val;
                prev1=prev1->next;
            }
            
            sum+=carry;
            carry=sum/10;
            ListNode* node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        
        ListNode* prev2=NULL, *curr2=ans->next, *next2=NULL;
        while(curr2!=NULL){
            next2=curr2->next;
            curr2->next=prev2;
            prev2=curr2;
            curr2=next2;
        }
       
        return prev2;
    }
};