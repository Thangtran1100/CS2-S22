#include<iostream>

class Tree
{
private:
    struct Node
    {
        int value;

        Node* left;
        Node* right;
    };

    Node* root;
public:
    void maxTree();
};

