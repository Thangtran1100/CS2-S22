#include "info.h"

//Insert function
void PartInfo::insert(PartNode *&nodeptr, PartNode *&newNode)
{
    //If it is at the end of branch and insertion point has been found
    if(nodeptr == nullptr)
    {
        nodeptr = newNode; // insert id
    }
    else if(newNode->id < nodeptr->id)
    {
        insert(nodeptr->left, newNode);
    }
    else
    {
        insert(nodeptr->right, newNode);
    }
}

//Searching a Tree for a partID
std::string PartInfo::searchPart(int partID)
{
    PartNode *nodeptr = root;
    while(nodeptr) //nodeptr is pointing to a Node
    {
        if(nodeptr->id == partID)
        {
            return nodeptr->name;
        }
        
        if(partID < nodeptr->id)
        {
            nodeptr = nodeptr->left;
        }
        else
        {
            nodeptr = nodeptr->right;
        }
    }

    return "Part is not found";
}


//Inserting a Node in BST
void PartInfo::insertNode(int partID, std::string partName)
{
    PartNode *newNode = nullptr;
    newNode = new PartNode;
    newNode->id = partID;
    newNode->name = partName;
    newNode->left = nullptr;
    newNode->right = nullptr;
    insert(root, newNode);
}

//The display inorder function Left-Root-Right
void PartInfo::displayInOrder(PartNode *nodeptr) const
{
    if(nodeptr)
    {
        displayInOrder(nodeptr->left);
        std::cout << nodeptr->id << ": " << nodeptr->name << std::endl;
        displayInOrder(nodeptr->right);
    }
}

//The display preorder function Root-Left-Right
void PartInfo::displayPreOrder(PartNode *nodeptr) const
{
    if(nodeptr)
    {
        std::cout << nodeptr->id << ": " << nodeptr->name << std::endl;
        displayPreOrder(nodeptr->left);
        displayPreOrder(nodeptr->right);
    }
}

//The display postorder function Left-Right-Root
void PartInfo::displayPostOrder(PartNode *nodeptr) const
{
    if(nodeptr)
    {
        displayPostOrder(nodeptr->left);
        displayPostOrder(nodeptr->right);
        std::cout << nodeptr->id << ": " << nodeptr->name << std::endl;
    }
}