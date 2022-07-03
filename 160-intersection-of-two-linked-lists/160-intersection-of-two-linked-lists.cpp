/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2=headB;
        
        ListNode* p1=headA;
        ListNode* p2=headB;
        
        int c1=0,c2=0;
        while(t1!=NULL){
            c1+=1;
            t1=t1->next;
        }
        
        while(t2!=NULL){
            c2+=1;
            t2=t2->next;
        }
        
        int x=abs(c1-c2);
        if(c1>c2){
            while(x){
                p1=p1->next;
                x--;
            }
        }else{
            while(x){
                p2=p2->next;
                x--;
            }
        }
        cout<<p1->val;
        cout<<p2->val;
        
        while(p1!=NULL && p2!=NULL){
            if(p1==p2)
            {
                return p1;
            }
            p1=p1->next;
            p2=p2->next;
        }
        return NULL;
    }
};