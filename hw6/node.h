#ifndef NODE_H
#define NODE_H

// declares ItemType to be an alias for the type int
typedef int ItemType;
struct Node
{
    ItemType data;

    Node *next;
};

class LinkedList: public Node
{
private:
    Node *head = nullptr;
public:
    Node* createNode(int);
    void append(int);
    void reverse();
    void display();
    void insert(Node **, Node *);
    //delete list
    ~LinkedList();
};

#endif