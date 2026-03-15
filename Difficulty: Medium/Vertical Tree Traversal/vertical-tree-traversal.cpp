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
    vector<vector<int>> verticalOrder(Node *root) {
        vector<pair<int,Node*>> ans;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        Node* temp;
        int a;
        while(!q.empty()){
            temp=q.front().first;
            a=q.front().second;
            ans.push_back({a,temp});
            if(temp->left!=NULL)
            q.push({temp->left,a-1});
            if(temp->right!=NULL)
            q.push({temp->right,a+1});
            q.pop();
        }
        int n=ans.size();
        stable_sort(ans.begin(),ans.end(),[](const pair<int,Node*> &a, const pair<int,Node*> &b){
            return a.first<b.first;
        });
        vector<vector<int>> res;
        vector<int> t;
        int prev=ans[0].first;
        for(int i=0;i<n;i++)
        {
            if(ans[i].first!=prev){
                res.push_back(t);
                prev=ans[i].first;
                t.clear();
            }
            t.push_back((ans[i].second)->data);
        }
        res.push_back(t);
        return res;
        
    }
};