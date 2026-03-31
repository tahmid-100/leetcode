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
      vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {

        if(!root) return ans;
         
        queue<TreeNode* >q;

        q.push(root);

        while(!q.empty()){
             
          int sz=q.size();

          for(int i=0;i<sz;i++){             
                             
                TreeNode* p=q.front();q.pop();

                if(i==sz-1) ans.push_back(p->val);

                if(p->left) q.push(p->left);

                if(p->right) q.push(p->right);

          }
                

        }



       return ans;

        
    }
};