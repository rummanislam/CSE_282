#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};


Node *constructLL(int arr[],int arrsize )
{
    Node* head= new Node(arr[0]);
    Node* current=head;


    for(int i=1;i<arrsize;i++)
    {
        Node *temp= new Node(arr[i]);
        current->next= temp;
        current=temp;
    }

    return head;
}

Node *insertNode(Node *head,int newval)
{
    Node* current=NULL;
    if(head==NULL)
    {
        current= new Node(newval);
        head=current;

        return head;
    }


        current= new Node(newval);
        current->next=head;
        head=current;


        return head;

}

void TraverseLL(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



int main()
{
    int arr[10]={1,2,3,4,5,6};
    int x;

    Node *head= constructLL(arr,6);

    TraverseLL(head);

    cout<<"\n Enter a new value at the beggining"<<endl;

    cin>>x;
    head= insertNode(head,x);

    TraverseLL(head);
}
