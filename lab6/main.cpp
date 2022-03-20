#include<iostream>
#include "stack.h"

int main()
{
    IntStack e_stack(5);

    e_stack.push(10);
    e_stack.push(20);
    e_stack.push(30);
    e_stack.push(40);
    e_stack.push(50);

    e_stack.display();

    std::cout << std::endl;

    e_stack.pop();

    e_stack.display();

    return 0;
}