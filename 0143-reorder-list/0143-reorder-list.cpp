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
    void reorderList(ListNode* head) {
        stack<ListNode*> ans;
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL){
            ans.push(temp);
            temp=temp->next;
            c++;
        }
        temp=head;
        while(c>0 && temp != NULL && temp->next != NULL){
            ListNode* x=ans.top();
            ans.pop();
            x->next=temp->next;
            temp->next=x;
            temp=x->next;;
            c=c-2;
            
        }
        if (temp != nullptr) {
         temp->next = nullptr;
         }
        return;
    }
};