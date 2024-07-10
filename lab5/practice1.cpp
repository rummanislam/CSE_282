
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }

};

 void inordertraversal(Node *temp)
 {
     if(temp==NULL)
        return;

     inordertraversal(temp->left);
     cout<<temp->data<<" ";
     inordertraversal(temp->right);
 }


 void preordertraversal(Node * temp)
 {
     if(temp==NULL)
     {
         return;
     }

     cout<<temp->data<<" ";

     preordertraversal(temp->left);
     //cout<<temp->data<<" ";
     preordertraversal(temp->right);
 }


  void postordertraversal(Node * temp)
 {
     if(temp==NULL)
     {
         return;
     }

     //cout<<temp->data<<" ";

     postordertraversal(temp->left);
     //cout<<temp->data<<" ";
     postordertraversal(temp->right);

     cout<<temp->data<<" ";
 }


int main()
{
    Node*root1=new Node(50);
    root1->left=new Node(17);
    root1->right= new Node(72);
    root1->left->left= new Node(12);
    root1->left->right=new Node(23);
    root1->right->left=new Node(54);
    root1->right->right= new Node(76);
    root1->left->left->left=new Node(9);
    root1->left->left->right=new Node(14);
    root1->left->right->right= new Node(19);
    root1->right->left->right = new Node(67);
cout<<endl<<"In-Order Traversal of the tree:"<<endl;
    inordertraversal(root1);
cout<<endl<<"Pre-Order Traversal of the tree:"<<endl;
    preordertraversal(root1);
cout<<endl<<"Post-Order Traversal of the tree:"<<endl;
    postordertraversal(root1);





}
