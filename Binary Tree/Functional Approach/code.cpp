#include <iostream>
using namespace std;
class Node
{
public:
    Node *left;
    Node *right;
    int data;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int numberOfNodes(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (numberOfNodes(root->left)+numberOfNodes(root->right)+1);
}
int sumOfNodes(Node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (sumOfNodes(root->left)+sumOfNodes(root->right)+root->data);
}
int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return (max(leftHeight,rightHeight)+1);
}
int diameter(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int currentDiameter = leftHeight + rightHeight + 1;
    int leftDiameter = diameter(root->left);
    int rightDiameter = diameter(root->right);
    return (max(currentDiameter,max(leftDiameter,rightDiameter)));

}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << "\nInorder Traversal: ";
    inorder(root);
    cout << "\nPostorder Traversal: ";
    postorder(root);
    cout << endl << endl ;
    cout << "Number of Nodes: " << numberOfNodes(root) << endl;
    cout << "Sum of Nodes: " << sumOfNodes(root) << endl;
    cout << "Height of Tree: " << height(root) << endl;
    cout << "Diameter of Tree: " << diameter(root) << endl;
}