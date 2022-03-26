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
    // Create 3 pointers are current, previous and next pointers
    Node *curr = head, *previous = nullptr, *next = nullptr;

    while (curr != nullptr)
    {
        // Store next node
        next = curr->next;

        // Reverse current node pointer
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

    while (curr != nullptr)
    {
        std::cout << curr->data << " ";

        curr = curr->next;
    }

    std::cout << std::endl;
}

void LinkedList::inserting(int value)
{
    Node *node = new Node;

    node->data = value;

    node->next = nullptr;

    // when list is empty
    if (head == nullptr)
    {
        head = node;
    }
    // when list is not empty
    else
    {
        Node *temp = head;

        // insert at head when value is greater than head
        if (temp->data > value)
        {
            node->next = head;

            head = node;

            return;
        }

        while (temp->next != nullptr && temp->next->data < value)
        {
            temp = temp->next;
        }

        // insert at the position needed to insert
        if (temp->next != nullptr)
        {
            Node *current = temp->next;

            temp->next = node;

            node->next = current;
        }
        // insert at the end
        else
        {
            temp->next = node;
        }
    }
}

LinkedList::~LinkedList()
{
    while (head != nullptr)
    {
        Node *temp = head;

        head = head->next;

        delete (temp);
    }
}