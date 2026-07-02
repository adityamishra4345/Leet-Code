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
    ListNode* swapPairs(ListNode* head) {
        ListNode* b=head;
        if(b==NULL){
            return NULL;
        }
        ListNode* c=head->next;
        if(c==NULL){
            return b;
        }
        ListNode* a=head;
        int d=0;
        while(b->next!=NULL && c->next!=NULL){
            
            b->next=c->next;
            c->next=b;
            if(d==0){
                head=c;
            }
           
            if(d!=0){
                a->next=c;
            }
            a=b;
            d++;
            b=b->next;
            c=b->next;
             
        }
        if(b!=NULL && c!=NULL){
            b->next=NULL;
            c->next=b;

            if(d!=0){
                a->next=c; 
            }
            else{
                head=c;
            }
        }
        return head;

        
    }
};