#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * left;
    Node * right;

    Node(int value)
    {
        data= value;
        left=right =NULL;
    }
};

int maxdepth(Node * root)
{
    if( root == NULL) return 0;

    int lh= 1+ maxdepth(root->left);
    int rh=1 + maxdepth(root->right);

    if(abs(lh-rh)>1) return 1;

    return max(lh,rh);
}






bool isbalanced(Node * root)
{
    return maxdepth(root)!=1;
}

int main()
{
    Node * root = new Node(1);
    root->left= new Node(2);
    root->left= new Node(3);


    int h= isbalanced(root);

    if(h==0)
    {
        cout<<"The tree is balanced"<<endl;

    }

    else
        cout<<"The tree is not balanced"<<endl;
}
