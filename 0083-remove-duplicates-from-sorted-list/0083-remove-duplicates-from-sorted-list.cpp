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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr1=head;
        if(ptr1==NULL){
            return NULL;
        }
        ListNode* ptr2=head->next;
        while(ptr2!=NULL){
            if(ptr1->val==ptr2->val){
                ptr2=ptr2->next;
            }
            else{
                ptr1->next=ptr2;
                ptr1=ptr2;
                ptr2=ptr2->next;
            }
        }
        ptr1->next=NULL;
        return head;

        
    }
};