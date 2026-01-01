/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        Node *i=head1,*j=head1->next;
        while(j!=NULL){
            i->next=NULL;
            i=j;
            j=j->next;
        }
        i=head2;
        while(i!=NULL)
        {
            if(i->next==NULL)
            return i;
            i=i->next;
        }
        // Node* k=head2;
        return head1;
    }
};