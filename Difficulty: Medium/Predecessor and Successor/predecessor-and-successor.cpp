
/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    void inorder(Node *root,vector<Node*> &ans)
    {
        if(root==NULL)
        return;
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        vector<Node*> ans;
        inorder(root,ans);
        int n=ans.size();
        vector<Node*> res;
        for(int i=0;i<n;i++)
        {
            if(ans[i]->data==key)
            {
                if(i==0)
                res.push_back(NULL);
                else
                res.push_back(ans[i-1]);
                if(i==n-1)
                res.push_back(NULL);
                else
                res.push_back(ans[i+1]);
            }
            else if(ans[i]->data>key)
            {
                if(i==0)
                res.push_back(NULL);
                else
                res.push_back(ans[i-1]);
                res.push_back(ans[i]);
            }
        }
        if(res.size()==0)
        {
            res.push_back(ans[n-1]);
            res.push_back(NULL);
        }
        return res;
        
    }
};

