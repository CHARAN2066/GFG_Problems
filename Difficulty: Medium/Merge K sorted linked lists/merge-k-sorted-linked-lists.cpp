/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& lists) {
        int n=lists.size();
        if(n==0)
        return NULL;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            Node *temp=lists[i];
            while(temp!=NULL)
            {
                ans.push_back(temp->data);
                temp=temp->next;
            }
        }
        int a=ans.size();
        sort(ans.begin(),ans.end());
        int b=0;
        while(lists[b]==NULL)
        { 
            if(lists[b]!=NULL)
            break;
            b++;
            if(b==n)
            break;
        }
        if(b==n)
        return NULL;
        Node *t=lists[b];
        int j=0,l=b+1;
        while(t!=NULL)
        {
            if(l<n&&t->next==NULL)
            {
                while(lists[l]==NULL)
                {
                    l++;
                    if(l==n)
                    break;
                }
                if(l!=n)
                t->next=lists[l];
                l++;
            }
            if(j<a)
            {
            t->data=ans[j];
            j++;
            }
            t=t->next;
        }
        return lists[b];
    }
};

