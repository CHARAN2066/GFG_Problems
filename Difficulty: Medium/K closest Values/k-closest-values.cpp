/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void inorder(Node *root,vector<int> &ans)
    {
        if(root==NULL)
        return ;
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
    vector<int> getKClosest(Node* root, int t, int k) {
        vector<int> ans;
        int a=-1;
        inorder(root,ans);
        int n=ans.size();
        for(int i=0;i<n;i++)
        {
            if(ans[i]>t)
            {
                a=i;
                break;
            }
        }
        int b=a-1;
        vector<int> res;
        if(a==-1)
        {
            for(int i=0;i<k;i++)
            {
                res.push_back(ans[n-1-i]);
            }
        }
        else if(a==0)
        {
            for(int i=0;i<k;i++)
            {
                res.push_back(ans[i]);
            }
        }
        else
        {
            while(res.size()<k)
            {
                if((a<n)&&(b>=0))
                {
                    if(abs(t-ans[a])<abs(t-ans[b]))
                    {
                        res.push_back(ans[a]);
                        a++;
                    }
                    else 
                    {
                        res.push_back(ans[b]);
                        b--;
                    }
                }
                else if(a<n)
                {
                    res.push_back(ans[a]);
                    a++;
                }
                else if(b>=0)
                {
                    res.push_back(ans[b]);
                    b--;
                }
            }
        }
        return res;
        // 4 8 10 12 14 20 22
    }
};