#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * left;
    Node * right;

    Node(int value)
    {
        data = value;
        left=right=NULL;
    }

};


int maxdepth(Node *temp)
{
    if(temp==NULL) return 0;
    int lh=maxdepth(temp->left);
    int rh=maxdepth(temp->right);
    return 1+max(lh,rh);
}


int main()
{
    Node *root=new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);
    root -> left -> left -> left = new Node(9);

    cout<<maxdepth(root);
}



