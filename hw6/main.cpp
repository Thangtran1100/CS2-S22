#include "node.h"

int main()
{
    LinkedList *node1 = new LinkedList;

    node1->append(1);
    node1->append(2);
    node1->append(3);
    node1->append(4);
    node1->append(6);
    
    Node *node2 = new Node;

    

    node1->display();

    node1->reverse();

    node1->display();

    node1->~LinkedList();

    return 0;
}