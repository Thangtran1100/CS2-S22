#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
class List
{
private:
    struct Node
    {
        int value;
        
        Node *next;
    };

    Node *head = NULL;
public:
    //Constructor
    List()
    {
        head = NULL;
    }

    //Destructor
    ~List();

    //Function operator
    void display();
    void append(int);

};
#endif