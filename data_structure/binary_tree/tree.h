#ifndef TREE_H
#define TREE_H

#include<iostream>

class Node
{
private:
    int data;

    Node *left;

    Node *right;

    Node *root;
public:
    Node()
    {
        data = 0;

        left = right = NULL;
    }

    Node(int value)
    {
        data = value;

        left = right = NULL;
    }

    void insert(Node*, const int);
    void printPreOrder(Node *);
    void printPostOrder(Node *);
};

#endif