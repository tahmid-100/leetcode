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
     vector<string>ans;
    
    void dfs(TreeNode* root,string path,vector<string>&ans){

          if(path.empty()){
            path+=to_string(root->val);
        }

        else path+="->"+to_string(root->val);


         if(!root->left && !root->right) {
            ans.push_back(path);

            return;   
        }

        if(root->left) dfs(root->left,path,ans);

        if(root->right) dfs(root->right,path,ans);
    }

    vector<string> binaryTreePaths(TreeNode* root) {

      
        if(!root) return ans;

        dfs(root,"",ans);
        
        return ans;
    }
};