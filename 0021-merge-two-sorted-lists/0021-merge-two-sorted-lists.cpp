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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a=list1;
        ListNode* b=list2;
        ListNode* y;
        if(a==NULL){
            return b;
        }
        if(b==NULL){
            return a;
        }
        if(a->val<b->val){
            y= new ListNode(a->val);
            a=a->next;

        }
        else{
            y= new ListNode(b->val);
            b=b->next;
            
        }
        ListNode* temp=y;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                ListNode* x= new ListNode(a->val);
                temp->next=x;
                temp=x;
                a=a->next;
            }
            else{
                ListNode* x= new ListNode(b->val);
                temp->next=x;
                temp=x;
                b=b->next;
            }    
        }
        if(a==NULL){
            while(b!=NULL){
                ListNode* x= new ListNode(b->val);
                temp->next=x;
                temp=x;
                b=b->next;
            }
        }
        else if (b==NULL){
            while(a!=NULL){
                ListNode* x= new ListNode(a->val);
                temp->next=x;
                temp=x;
                a=a->next;
            }
        }

        return y;
        
        
        
    }
};