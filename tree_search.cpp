#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
struct Node
{
    int data;
    Node *left,*right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
Node* insert(Node*root,int val)
{
    if(root==NULL )
    return new Node(val);
    if(val<root->data)
    root->left=insert(root->left,val);
    else
    root->right=insert(root->right,val);
    return root;
}
void print(Node* root)
{
    if(root==NULL)
    return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
    //cout<<root->data<<" ";
}
int main()
{
    Node* root=NULL;
    root=insert(root,5);
    insert(root,5);
    insert(root,5);
    insert(root,5);
    insert(root,5);
    insert(root,5);
    insert(root,5);
    insert(root,5);
    print(root);
    cout<<endl;;
}