#include <iostream>
#include "node.h"

template class LinkedList<int>;

template<typename Type>
void LinkedList<Type>::create(Type A[], Type n)
{
    for (int i = 0; i < n; i++)
    {
        append(A[i]);
    }
}

template<typename Type>
void LinkedList<Type>::append(Type value)
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
template<typename Type>
void LinkedList<Type>::reverse()
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

template<typename Type>
void LinkedList<Type>::display()
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

template<typename Type>
void LinkedList<Type>::inserting(Type value)
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

        // insert at head when value is smaller than head
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
            //temp->next = node;
            append(value);
        }
    }
}
template<typename Type>
LinkedList<Type>::~LinkedList()
{
    while (head != nullptr)
    {
        Node *temp = head;

        head = head->next;

        delete (temp);
    }
}
