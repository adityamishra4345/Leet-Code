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
    bool isPalindrome(ListNode* head) {
        ListNode* foll=head->next;
        ListNode* x=new ListNode(head->val);
        ListNode* head2=x;
        ListNode* temp=x;
        while(foll!=NULL){
             ListNode* y=new ListNode(foll->val);
             temp->next=y;
             temp=y;
             foll=foll->next;
        }
        temp->next=NULL;
        //array me dalke krne pe same time and space aaiga so
        //prefer that
        

        
        
        ListNode* ptr1=head;        
        ListNode* ptr2=head->next;
        if(ptr2==NULL){
            return true;
        }
        ListNode* ptr3=head->next->next;
        ptr1->next=NULL;
        while(ptr3!=NULL){
            ptr2->next=ptr1;
            ptr1=ptr2;
            ptr2=ptr3;
            ptr3=ptr3->next;
            
         }
         ptr2->next=ptr1;
         head=ptr2;
         
         
         
         ptr1=head;
         ptr2=head2;
         while(ptr1!=NULL&&ptr2!=NULL){
            if(ptr1->val!=ptr2->val){
                return false;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
         }
         return true;

        
    }
};