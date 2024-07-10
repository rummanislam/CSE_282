#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;


    Node(int value)
    {
        data = value;
        left= right =NULL;
    }
};

int maxDepth(Node* temp)
{
    if(temp==NULL) return 0;

    int lh=1+ maxDepth(temp->left);
    int rh=1+ maxDepth(temp->right);

    if(abs(lh-rh)>1)
        return -1;

    return max(lh,rh);
}

bool isbalanced(Node* temp)
{
    return maxDepth(temp)!= -1;
}

int main()
{
Node* root = new Node(1);
root -> left = new Node(2);
root -> left -> left = new Node(4);


int h = isbalanced(root);
if(h==0)
{
cout<<"Tree in not balanced"<<endl;
}
else{
cout<<"Tree is balanced"<<endl;
}
}


