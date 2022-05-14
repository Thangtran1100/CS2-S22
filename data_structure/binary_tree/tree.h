// class IntBinaryTree
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

#include<iostream>
#include<math.h>
class IntBinaryTree
{
private:
    struct TreeNode
    {
        int data;
        TreeNode *left;
        TreeNode *right;
    };

    TreeNode *root;

    // Private member functions
    void insert(TreeNode *&, TreeNode *&);
    void destroySubTree(TreeNode *);
    void deleteNode(int, TreeNode *&);
    void makeDeletion(TreeNode *&);
    void displayInOrder(TreeNode *) const;
    void displayPreOrder(TreeNode *) const;
    void displayPostOrder(TreeNode *) const;
    int countNode(TreeNode *);
    int countLeaf(TreeNode *);
public:
    IntBinaryTree() // default constructor
    {
        root = nullptr;
    }

    IntBinaryTree(int value) // Constructor
    {
        root = new TreeNode;
        root->data = value;
        root->left = nullptr;
        root->right = nullptr;
    }

    // Destructor
    ~IntBinaryTree()
    {
        destroySubTree(root);
    }

    // Binary Tree Operation
    void insertNode(int);
    bool searchNode(int);
    void remove(int);

    void displayInOrder() const
    {
        displayInOrder(root);
    }

    void displayPreOrder() const
    {
        displayPreOrder(root);
    }

    void displayPostOrder() const
    {
        displayPostOrder(root);
    }

    void countNodes()
    {
        std::cout << "Number of Nodes: ";
        std::cout << countNode(root) << std::endl;
    }

    void countLeafNode()
    {
        std::cout << "Number of leaf nodes: ";
        std::cout << countLeaf(root) << std::endl;
    }
    
};


#endif