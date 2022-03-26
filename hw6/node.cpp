#include <iostream>
#include "node.h"

//Create a new node
Node* LinkedList::createNode(int import_data)
{
    Node* node = new Node();
 
    node->data = import_data;

    node->next = nullptr;
 
    return node;
}

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

void LinkedList::insert(Node **head, Node *node)
{
    Node *current;

    /* Special case for the head end */
    if (*head == nullptr || (*head)->data >= node->data)
    {
        node->next = *head;

        *head = node;
    }
    else
    {
        //Locate the node before the insertion 
        current = *head;

        while (current->next != nullptr && current->next->data < node->data)
        {
            current = current->next;
        }

        node->next = current->next;

        current->next = node;
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