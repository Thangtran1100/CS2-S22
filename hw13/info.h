// class PartInfo
#ifndef INFO_H
#define INFO_H

#include<iostream>
#include<string>

class PartInfo
{
private:
    struct PartNode
    {
        int id;
        std::string name;

        PartNode *left;
        PartNode *right;
    };

    PartNode *root;

    // Private member functions
    void insert(PartNode *&, PartNode *&);
    void displayInOrder(PartNode *) const;
    void displayPreOrder(PartNode *) const;
    void displayPostOrder(PartNode *) const;
public:
    PartInfo() // default constructor
    {
        root = nullptr;
    }

    PartInfo(int partID, std::string partName) // Constructor
    {
        root = new PartNode;
        root->id = partID;
        root->name = partName;
        root->left = nullptr;
        root->right = nullptr;
    }

    // Binary Tree Operation
    void insertNode(int, std::string);
    std::string searchPart(int);

    //Display function
    void displayInOrder() const
    {
        displayInOrder(root);
    }
    
};


#endif