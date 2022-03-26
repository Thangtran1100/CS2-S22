#include<iostream>
#include "node.h"

void insertNode(Node *node1, int value)
{
    Node *current, *head = nullptr, *temp = nullptr;

    Node *new_node = new Node;

    new_node->data = value;

    new_node->next = nullptr;

    if(head == nullptr)
    {
        head = new_node;
    }
    else
    {
        while(node1 && node1->data < value)
        {
            temp = node1;

            node1 = node1->next;
        }

        if(node1 == head)
        {
            new_node->next = head;

            head = new_node;
        }
        else
        {
            new_node->next = temp->next;

            temp->next = new_node;
        }
    }

}

int main()
{
    LinkedList *node1 = new LinkedList;

    node1->append(1);
    node1->append(2);
    node1->append(3);
    node1->append(4);
    node1->append(6);

    node1->display();

    node1->reverse();

    node1->display();

    insertNode(node1, 5);

    node1->display();

    node1->~LinkedList();

    return 0;
}