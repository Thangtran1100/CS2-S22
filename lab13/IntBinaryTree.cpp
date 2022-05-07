#include "IntBinaryTree.h"

//Insert function
void IntBinaryTree::insert(TreeNode *&nodeptr, TreeNode *&newNode)
{
    //If it is at the end of branch and insertion point has been found
    if(nodeptr == nullptr)
    {
        nodeptr = newNode; // insert data
    }
    else if(newNode->data < nodeptr->data)
    {
        insert(nodeptr->left, newNode);
    }
    else
    {
        insert(nodeptr->right, newNode);
    }
}
//*&nodeptr: nodeptr is a reference to a pointer to a TreeNode structure. 
//This means that any action performed on nodeptr is actually performed on the argument that was passed into nodeptr.

//Searching a Tree for a number
bool IntBinaryTree::searchNode(int num)
{
    TreeNode *nodeptr = root;
    while(nodeptr) //nodeptr is pointing to a Node
    {
        if(nodeptr->data == num)
        {
            return true;
        }
        
        if(num < nodeptr->data)
        {
            nodeptr = nodeptr->left;
        }
        else
        {
            nodeptr = nodeptr->right;
        }
    }

    return false;
}

//The display inorder function Left-Root-Right
void IntBinaryTree::displayInOrder(TreeNode *nodeptr) const
{
    if(nodeptr)
    {
        displayInOrder(nodeptr->left);
        std::cout << nodeptr->data << std::endl;
        displayInOrder(nodeptr->right);
    }
}

//The display preorder function Root-Left-Right
void IntBinaryTree::displayPreOrder(TreeNode *nodeptr) const
{
    if(nodeptr)
    {
        std::cout << nodeptr->data << std::endl;
        displayPreOrder(nodeptr->left);
        displayPreOrder(nodeptr->right);
    }
}

//The display postorder function Left-Right-Root
void IntBinaryTree::displayPostOrder(TreeNode *nodeptr) const
{
    if(nodeptr)
    {
        displayPostOrder(nodeptr->left);
        displayPostOrder(nodeptr->right);
        std::cout << nodeptr->data << std::endl;
    }
}

//destroySubTree deletes all the nodes in the tree
void IntBinaryTree::destroySubTree(TreeNode *nodeptr)
{
    if(nodeptr)
    {
        if(nodeptr->left)
        {
            destroySubTree(nodeptr->left);
        }

        if(nodeptr->right)
        {
            destroySubTree(nodeptr->right);
        }

        delete nodeptr;
    }
}

//MakeDeletion takes a reference to a pointer to the node that is to be deleted.
//The node is removed and the branches of the tree below the node are reattached

void IntBinaryTree::makeDeletion(TreeNode *&nodeptr)
{
    //Define a temporary pointer to use in reattaching the left subtree
    TreeNode *tempNodeptr = nullptr;

    if(nodeptr == nullptr)
    {
        std::cout << "Cannot delete empty node.\n";
    }
    else if(nodeptr->right == nullptr)
    {
        tempNodeptr = nodeptr;
        nodeptr = nodeptr->left;
        delete tempNodeptr;
    }
    else if(nodeptr->left == nullptr)
    {
        tempNodeptr = nodeptr;
        nodeptr = nodeptr->right;
        delete tempNodeptr;
    }
    else
    {
        //Move one node the right
        tempNodeptr = nodeptr->right;

        //Go to the end left node
        while(tempNodeptr->left)
        {
            tempNodeptr = tempNodeptr->left;
        }

        //Reattach the left subtree
        tempNodeptr->left = nodeptr->left;
        tempNodeptr = nodeptr;

        //Reattach the right subtree
        nodeptr = nodeptr->right;
        delete tempNodeptr;
    }
}

//Inserting a Node in BST:
void IntBinaryTree::insertNode(int num)
{
    TreeNode *newNode = nullptr;
    newNode = new TreeNode;
    newNode->data = num;
    newNode->left = nullptr;
    newNode->right = nullptr;
    insert(root, newNode);
}

//Deleting a Node in BST
void IntBinaryTree::remove(int num)
{
    deleteNode(num, root);
}

void IntBinaryTree::deleteNode(int num, TreeNode *&nodeptr)
{
    if(num < nodeptr->data)
    {
        deleteNode(num, nodeptr->left);
    }
    else if(num > nodeptr->data)
    {
        deleteNode(num, nodeptr->right);
    }
    else
    {
        makeDeletion(nodeptr);
    }
}

int IntBinaryTree::countNode(TreeNode *root)
{
    int n_right = 0;
    int n_left = 0;

    TreeNode *t_left = root;
    TreeNode *t_right = root;

    while (t_left)
    {
        n_left++;
        t_left = t_left->left;
    }
    while (t_right)
    {
        t_right = t_right->right;
        n_right++;
    }

    if (n_left == n_right)
    {
        return pow(2, n_left) - 1;
    }

    return 1 + countNode(root->left) + countNode(root->right);
}

int IntBinaryTree::countLeaf(TreeNode* root)
{
    if(root == nullptr)
    {    
        return 0;
    }

    if(root->left == nullptr && root->right == nullptr)
    {
        return 1;        
    }

    return countLeaf(root->left) + countLeaf(root->right);
}