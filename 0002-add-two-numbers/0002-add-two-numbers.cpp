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
        ListNode* a=l1;        
        ListNode* b=l2; 
        ListNode* temp;
        ListNode* p1;
        ListNode* p2;
        ListNode* y;
        int carry=0;
        int sum=(a->val+b->val);
        ListNode* x;
        if(sum>=10){
            x=new ListNode(sum%10);
            temp=x;  
            carry=sum/10; 
        }  
        else{
            x=new ListNode(sum);
            temp=x;
        } 
        a=a->next;
        b=b->next;
        while(a!=NULL&&b!=NULL){
            sum=a->val+b->val+carry;
            if(sum>=10){
                y=new ListNode(sum%10);
             } 
            else{
                y=new ListNode(sum);               
                
            }
            temp->next=y;
            temp=temp->next;
            carry=sum/10;
            a=a->next;
            b=b->next;
        }
        while(a!=NULL){
            
            sum=a->val+carry;
            if(sum>=10){
                y=new ListNode(sum%10);
             } 
            else{
                y=new ListNode(sum);               
                
            }
            temp->next=y;
            temp=temp->next;
            carry=sum/10;
            a=a->next;
        }
        while(b!=NULL){
            
            sum=b->val+carry;
            if(sum>=10){
                y=new ListNode(sum%10);
             } 
            else{
                y=new ListNode(sum);               
                
            }
            temp->next=y;
            temp=temp->next;
            carry=sum/10;
            b=b->next;
        }
        if(carry!=0){
            y=new ListNode(1);
            temp->next=y;
            temp=temp->next;
        }
        temp->next=NULL;
        return x;

    }
};