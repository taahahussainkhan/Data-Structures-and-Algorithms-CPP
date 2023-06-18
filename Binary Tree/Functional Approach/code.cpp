#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
// Preorder building of the tree
node* buildTree()
{   
    int data;
    cout << "Enter data: ";
    cin >> data;
    if(data==-1)
    return NULL;
    node* n = new node(data);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
void Preorder(node* root)
{
    if(root ==NULL)
    {
        return ;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}
int main()
{
    node* root = buildTree();
    Preorder(root);
    return 0;
}