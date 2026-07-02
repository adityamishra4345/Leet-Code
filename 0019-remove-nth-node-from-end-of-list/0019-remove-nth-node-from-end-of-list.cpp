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
        ListNode* a=head;
        int c=0;
        while(a->next!=NULL){
            a=a->next;
            c++;
        }
        a=head;
        int k=c-n;
        if(k==-1){
            if(n==1){
                return NULL;
            }
            else{
                head=head->next;
            }
        }
        else if(k==0){
            if(c==1){
                head->next=NULL;
                return head;
            }
            else{
                head->next=head->next->next;
                return head;
            }            
        }
        else{
            while(k>0){
            a=a->next;
            k--;
        }}
        a->next=a->next->next;
        return head;

        
    }
};