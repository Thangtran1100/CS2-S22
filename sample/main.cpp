#include<iostream>

struct Node
{
    int data;

    Node *next;
};

void append(Node *head, int value)
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

int main()
{
    Node *head = nullptr;

    Node *node1 = new Node;

    Node *node2 = new Node;

    Node *node3 = new Node;


}

