#include "node.h"

int main()
{
    LinkedList *node1 = new LinkedList;

    node1->append(1);
    node1->append(2);
    node1->append(3);
    node1->append(4);
    node1->append(5);

    node1->display();

    return 0;
}