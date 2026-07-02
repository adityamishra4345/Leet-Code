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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* a=head;
        if(head==NULL){
            return NULL;
        }
        while(a->next!=NULL){
            arr.push_back(a->val);
            a=a->next;
        }
        arr.push_back(a->val);
        sort(arr.begin(),arr.end());
        ListNode* final=new ListNode(arr[0]);
        ListNode* curr=final;
        for(int i=1;i<arr.size();i++){
            ListNode* node=new ListNode(arr[i]);
            curr->next=node;
            curr=curr->next;
        }
        return final;
        
    }
};