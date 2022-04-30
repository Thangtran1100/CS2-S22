#include "tree.h"

void Node::insert(Node *root, const int value)
{
    if(root == NULL)
    {
        root = new Node{};

        root->data = value;

        root->left = NULL;
        root->right = NULL;
    }
    else if(value < root->data)
    {
        insert(root->left, value);
    }
    else
    {
        insert(root->right, value);
    }
}

void Node::printPreOrder(Node *root)
{
    if(root != NULL)
    {
        std::cout << root->data << " ";

        printPreOrder(root->left);
        
        printPreOrder(root->right);
    }
}

void Node::printPostOrder(Node *root)
{
    if(root != NULL)
    {
        printPostOrder(root->left);
        
        printPostOrder(root->right);

        std::cout << root->data << " ";
    }
}