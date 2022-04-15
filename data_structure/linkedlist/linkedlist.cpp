#include"linkedlist.h"

void List::display()
{
    Node *temp = head;

    while(temp != NULL)
    {
        std::cout << temp->value << std::endl;

        temp = temp->next;
    }
}

void List::append(int data)
{
    Node *temp = new Node;

    temp->value = data;

    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *curr = head;

        while(curr->next != NULL)
        {
            curr = curr->next;
        }

        curr->next = temp;
    }
}