#include<iostream>
#include "node.h"

int main()
{
    LinkedList<int> *node1 = new LinkedList<int>;

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

    node1->inserting(34);

    node1->display();

    node1->~LinkedList();

    LinkedList<int> *node2 = new LinkedList<int>;

    int arr[] = {1,2,6,20,30};

    node2->create(arr,5);

    node2->append(34);

    node2->inserting(5);

    node2->display();

    return 0;
}