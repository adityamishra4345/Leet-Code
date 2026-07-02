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
    ListNode* reverseList(ListNode* head) {

        ListNode* ptr1=head;
        if(ptr1==NULL){
            return NULL;
        }
        
        ListNode* ptr2=head->next;
        if(ptr2==NULL){
            return head;
        }
        ListNode* ptr3=head->next->next;
        while(ptr3!=NULL){
            ptr2->next=ptr1;
            ptr1=ptr2;
            ptr2=ptr3;
            ptr3=ptr3->next;
            
         }
         ptr2->next=ptr1;
         head->next=NULL;
         head=ptr2;
         return head;

        
    }
};