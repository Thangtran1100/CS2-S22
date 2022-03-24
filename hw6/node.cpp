#include <iostream>
#include "node.h"

void LinkedList::append(int value)
{
    Node *node = new Node;

    node->data = value;

    node->next = nullptr;

    // empty list
    if (head == nullptr)
    {
        head = node;
    }
    else
    {
        Node *curr = head;

        // loop till the last node of the list
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }

        curr->next = node; // add node as the new last node
    }
}

void LinkedList::reverse()
{
    //Create 3 pointers are current, previous and next pointers
    Node *curr = head, *previous = NULL, *next = NULL;

    while (curr != NULL)
    {
        //Store next node
        next = curr->next;

        //Reverse current node pointer
        curr->next = previous;

        previous = curr;

        curr = next;
    }

    head = previous;
}

void LinkedList::display()
{
    Node *curr;

    curr = head;

    while (curr != NULL)
    {
        std::cout << curr->data << " ";

        curr = curr->next;
    }

    std::cout << std::endl;
}

void LinkedList::insert()
{

}

LinkedList::~LinkedList()
{
    Node *temp = head;

    for(head; head != nullptr; head->next)
    {
        delete(temp);
    }
}