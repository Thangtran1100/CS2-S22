#include<iostream>
#include "node.h"

int main()
{
    LinkedList *node1 = new LinkedList;

    node1->append(2);
    node1->append(4);
    node1->append(8);
    node1->append(10);
    node1->append(20);

    node1->display(); //2 4 8 10 20 

    node1->inserting(5);

    node1->display(); //2 4 5 8 10 20

    node1->inserting(15);

    node1->display(); //2 4 5 8 10 15 20

    node1->inserting(9);

    node1->display(); //2 4 5 8 9 10 15 20

    node1->inserting(1);

    node1->display(); //1 2 4 5 8 9 10 15 20

    node1->~LinkedList();

    return 0;
}