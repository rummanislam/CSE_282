
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
    Node *root=new Node(1);
    root->left=new Node(3);

    root->left->left= new Node(5);
    root->left->right=new Node(2);

    root->left->left->right=new Node(4);
    root->left->right->left=new Node(7);
    root->left->right->right=new Node(8);
    root->left->right->left->right=new Node(9);
    root->left->left->right->right=new Node(11);
    root->left->right->right->right=new Node(13);
    root->left->right->right->right->right=new Node(12);

cout<<endl<<"In-Order Traversal of the tree:"<<endl;
    inordertraversal(root);
cout<<endl<<"Pre-Order Traversal of the tree:"<<endl;
    preordertraversal(root);
cout<<endl<<"Post-Order Traversal of the tree:"<<endl;
    postordertraversal(root);
}

