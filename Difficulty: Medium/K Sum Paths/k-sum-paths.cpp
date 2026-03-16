/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int K,ans=0;
    map<int,int> mp;
    void fun1(Node* root,int curr){
        if(root==NULL)
        return;
        curr+=root->data;
        ans+=mp[(curr-K)];
        mp[curr]++;
        fun1(root->left,curr);
        fun1(root->right,curr);
        mp[curr]--;
        return;
    }    
    int countAllPaths(Node *root, int k) {
        K=k;
        mp[0]=1;
        fun1(root,0);
        return ans;
    }
};