#ifndef NODE_H
#define NODE_H

template<typename Type>
class LinkedList
{
private:
    struct Node
    {
        Type data;

        Node *next;
    };

    Node *head = nullptr;

public:
    void create(Type[], Type);
    void append(Type);
    void reverse();
    void display();
    void inserting(Type);
    // delete list
    ~LinkedList();
};

#endif