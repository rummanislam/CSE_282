#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data=value;
        left= right=NULL;
    }


};

int maxdepth(Node *root)
{
    if(root==NULL) return 0;

    int lh= 1+maxdepth(root->left);
    int rh= 1+maxdepth(root->right);

    return max(lh,rh);
}




int main()
{
    Node * root= new Node(50);
    root->left=new Node(17);
    root->left->left= new Node(12);
    root->left-> right = new Node(23);
    root->left->left ->left = new Node(9);
    root->left->left->right =new Node(14);
    root->left->right->right = new Node(19);
    root->right =new Node(72);
    root->right->left =new Node(54);
    root->right->left->right =new Node(67);
    root->right->right =new Node(76);

    int h=maxdepth(root);

    cout<<"The height of the tree= "<<h<<endl;

}
