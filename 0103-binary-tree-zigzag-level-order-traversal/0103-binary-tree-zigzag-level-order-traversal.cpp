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
public:  vector<vector<int>>ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(!root) return ans;

        queue<TreeNode*>q;

        q.push(root);
         int lvl=0;
        while(!q.empty()){
            int sz=q.size();

            

            vector<int>currlvl;

           for(int i=0;i<sz;i++){
              
            TreeNode* p=q.front();
            q.pop();

            currlvl.push_back(p->val);

            if(p->left) q.push(p->left);

            if(p->right) q.push(p->right);
             
           }

            lvl++;

            if(lvl%2==0){

                reverse(currlvl.begin(),currlvl.end());
            }

            ans.push_back(currlvl);


        }

        return ans;
        
    }
};