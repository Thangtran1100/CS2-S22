#include"linkedlist.h"

int main()
{
    List *list = new List;

    list->append(1);
    list->append(2);
    list->append(3);

    list->display();

    return 0;
}