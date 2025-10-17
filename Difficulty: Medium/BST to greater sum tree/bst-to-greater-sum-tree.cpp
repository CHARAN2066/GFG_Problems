//User function Template for C++

/*struct Node
{
	int data;
	struct Node *left, *right;
};*/

class Solution
{
    public:
    void inorder(struct Node *root,vector<int> &ans)
    {
        if(root==NULL)
        return;
        else
        {
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);
        }
    }
    void replace(struct Node *root,vector<int> &res,map<int,int> &mp)
    {
        if(root==NULL)
        return;
        else
        {
            replace(root->left,res,mp);
            root->data=mp[root->data];
            replace(root->right,res,mp);
        }
    }
    void transformTree(struct Node *root)
    {
        vector<int> ans;
        vector<int> res;
        inorder(root,ans);
        int n=ans.size();
        map<int,int> mp;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i+1;j<n;j++)
            {
                sum+=ans[j];
            }
            res.push_back(sum);
            mp[ans[i]]=res[i];
        }
        replace(root,res,mp);
        return;
    }
};
