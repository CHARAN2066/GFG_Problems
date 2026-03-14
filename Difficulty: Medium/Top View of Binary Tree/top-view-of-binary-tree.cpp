/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        map<int,bool> mp;
        map<int,int> m2;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        Node* a;
        int b;
        while(!q.empty()){
            a=q.front().first;
            b=q.front().second;
            q.pop();
            if(!mp[b])
            {
                m2[b]=(a->data);
            }
            mp[b]=true;
            if(a->left!=NULL)
            q.push({a->left,b-1});
            if(a->right!=NULL)
            q.push({a->right,b+1});
        }
        vector<int> ans;
        for(auto i:m2)
        ans.push_back(i.second);
        return ans;
    }
};