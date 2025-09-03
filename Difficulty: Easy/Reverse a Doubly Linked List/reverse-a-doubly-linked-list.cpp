/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        int n=0;
        Node *temp=head;
        Node *tail;
        while(temp!=NULL)
        {
            n++;
            tail=temp;
            temp=temp->next;
        }
        if(n%2!=0)
        n=((n/2)+1);
        else
        n=(n/2);
        temp=head;
        Node* temp2=tail;
        int a=0,t;
        while(temp!=NULL&&temp2!=NULL)
        {
            if(a==n)
            break;
            t=temp2->data;
            temp2->data=temp->data;
            temp->data=t;
            // cout<<temp->data<<" ";
            temp=temp->next;
            temp2=temp2->prev;
            a++;
        }
        return head;
    }
};