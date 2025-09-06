/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node *temp=head;
        Node *loop=NULL;
        while(temp!=NULL)
        {
            if(temp->data==-1)
            {
                loop=temp;
                break;
            }
            else
            {
                temp->data=-1;
            }
            temp=temp->next;
        }
        int ans=1;
        
        if(loop==NULL)
        return 0;
        //cout<<loop->data;
        else
        {
            temp=loop;
            while(temp->next!=loop)
            {
                ans++;
                if(temp->next==loop)
                break;
                temp=temp->next;
            }
        }
        return ans;   
    }
};