/*
class Node {
public:
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
    Node* mergeSort(Node* head) {
        vector<int> arr;
        Node* temp=head;
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            temp->data=arr[i];
            temp=temp->next;
        }
        return head;
        
    }
};