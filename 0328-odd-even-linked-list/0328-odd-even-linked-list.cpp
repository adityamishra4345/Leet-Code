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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* a=head;
        if(head==NULL){
            return NULL;
        }
        ListNode* b=head->next;
        ListNode* c=head->next;
        while(a->next!=NULL && b->next!=NULL){
            a->next=a->next->next;
            b->next=b->next->next;
            a=a->next;
            b=b->next;
        
        }
        a->next=c;
        return head;
        
    }
};