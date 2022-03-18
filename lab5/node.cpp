#include<iostream>
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

void LinkedList::display()
{
	Node *curr;

	curr = head;

	while(curr != NULL)
	{
		std::cout << curr->data << std::endl;

		curr = curr->next;
	}
}