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

    // Pop the first two values off the stack.
    pop(num);
    pop(product);

    // Multiply the two values, store in product.
    product *= num;

    // Push product back onto the stack.
    push(product);
}

void MathStack::div()
{
    int temp, num, quotient;

    // Pop the first two values off the stack.
    pop(quotient);
    pop(num);

    if(num != 0)
    {
        // Divide the two values if the first value is != 0, store in quotient.
        quotient /= num;
    }
    else
    {
        std::cout << "Error\n";
    }

    // Push quotient back onto the stack.
    push(quotient);
}

void MathStack::addAll()
{
    int num, sum;

    // Pop all num and add them to sum
    while(!isEmpty())
    {
        pop(num);

        sum += num;
    }

    // Push sum back onto the stack
    push(sum);
}
void MathStack::multAll()
{
    int num, product = 1;

    // Pop all num and multiply them with product
    while(!isEmpty())
    {
        pop(num);

        product *= num;
    }

    // Push product back onto the stack
    push(product);
}