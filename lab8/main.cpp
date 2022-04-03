#include <iostream>
#include "MathStack.h"

using namespace std;

int main()
{
    int catchVar; // To hold values popped off the stack
    // Create a MathStack object.
    MathStack stack(5);

    // Push 3 and 6 onto the stack.
    cout << "Pushing 3\n";
    stack.push(3);
    cout << "Pushing 6\n";
    stack.push(6);

    // Add the two values.
    stack.add();

    // Pop the sum off the stack and display it.
    cout << "The sum is ";
    stack.pop(catchVar);
    cout << catchVar << endl
         << endl;

    // Push 7 and 10 onto the stack
    cout << "Pushing 7\n";
    stack.push(7);
    cout << "Pushing 10\n";
    stack.push(10);

    // Subtract 7 from 10.
    stack.sub();

    // Pop the difference off the stack and display it.
    cout << "The difference is ";
    stack.pop(catchVar);
    cout << catchVar << endl
         << endl;

    // Push 10 and 2 onto the stack
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 2\n";
    stack.push(2);

    //Multiply two values
    stack.mult();

    //Pop the product off the stack and display it.
    cout << "The product is ";
    stack.pop(catchVar);
    cout << catchVar << endl
         << endl;

    // Push 10 and 2 onto the stack
    cout << "Pushing 2\n";
    stack.push(2);

    cout << "Pushing 20\n";
    stack.push(20);

    //Divide the second value by the first value
    stack.div();

    //Pop the quotient off the stack and display it.
    cout << "The quotient is ";
    stack.pop(catchVar);
    cout << catchVar << endl
         << endl;

    // Push values onto the stack
    cout << "Pushing 1\n";
    stack.push(1);

    cout << "Pushing 2\n";
    stack.push(2);

    cout << "Pushing 3\n";
    stack.push(3);

    cout << "Pushing 4\n";
    stack.push(4);

    cout << "Pushing 5\n";
    stack.push(5);

    //Multiply all values
    stack.multAll();

    //Pop the product off the stack and display it.
    cout << "The product is ";
    stack.pop(catchVar);
    cout << catchVar << endl
         << endl;

    // Push values onto the stack
    cout << "Pushing 1\n";
    stack.push(1);

    cout << "Pushing 2\n";
    stack.push(2);

    cout << "Pushing 3\n";
    stack.push(3);

    cout << "Pushing 4\n";
    stack.push(4);

    cout << "Pushing 5\n";
    stack.push(5);

    //Add all values
    stack.addAll();

    //Pop the sum off the stack and display it.
    cout << "The sum is ";
    stack.pop(catchVar);
    cout << catchVar << endl
         << endl;

    return 0;
}