#include "IntBinaryTree.h"


int main()
{
    IntBinaryTree tree(5);

    tree.insertNode(3);
    tree.insertNode(12);

    tree.displayInOrder();
    tree.countNodes();
    tree.countLeafNode();

    return 0;
}