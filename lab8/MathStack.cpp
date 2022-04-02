#include "MathStack.h"
#include<iostream>
//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
//***********************************************
void MathStack::add()
{
    int num, sum;
    // Pop the first two values off the stack.
    pop(sum);
    pop(num);
    // Add the two values, store in sum.
    sum += num;
    // Push sum back onto the stack.
    push(sum);
}
void MathStack::sub()
{
    int num, diff;
    // Pop the first two values off the stack.
    pop(diff);
    pop(num);
    // Subtract num from diff.
    diff -= num;
    // Push diff back onto the stack.
    push(diff);
}
void MathStack::mult()
{
    int num, product;

    pop(num);
    pop(product);

    product *= num;

    push(product);
}

void MathStack::div()
{
    int temp, num, quotient;

    pop(num);
    pop(quotient);

    if(num != 0)
    {
        quotient /= num;
    }
    else
    {
        std::cout << "Error\n";
    }

    push(quotient);
}

void MathStack::addAll()
{
    int num, sum;

    while(!isEmpty())
    {
        pop(num);

        sum += num;
    }

    push(sum);
}
void MathStack::multAll()
{
    int num, product = 1;

    while(!isEmpty())
    {
        pop(num);

        product *= num;
    }

    push(product);
}