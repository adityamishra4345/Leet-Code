/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> res;
         queue<TreeNode*> a;
        vector<int> x;
        if(root==NULL){
            
            return res;
        }
       
        
        a.push(root);
        x.push_back(root->val);
        res.push_back(x);
        x.pop_back();
        while(!a.empty()){
            int c=a.size();
            while(c>0){
                if(a.front()->left!=NULL){
                    x.push_back(a.front()->left->val);
                    a.push(a.front()->left);
                }
                if(a.front()->right!=NULL){
                    x.push_back(a.front()->right->val);
                    a.push(a.front()->right);
                }
                a.pop();
                c--;
               
            }
            res.push_back(x);
            while(!x.empty()){
                x.pop_back();
            }

           

        }
        res.pop_back();
        return res;

        
    }
};