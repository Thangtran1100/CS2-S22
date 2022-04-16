#include "Stack.h"

Stack::Stack(int size)
{
    this->size = size;

    Arr = new int[size];
}

Stack::~Stack()
{
    delete[] Arr;
}

void Stack::display()
{
    for(int i = top; i >= 0; i--)
    {
        std::cout << Arr[i] << " ";
    }

    std::cout << std::endl;
}

void Stack::push(int value)
{
    if(top == size - 1)
    {
        std::cout << "Stack is full" << std::endl;
    }
    else
    {
        top++;
        Arr[top] = value;
    }
}

int Stack::pop()
{
    int value = -1;

    if(top == -1)
    {
        std::cout << "Stack is empty" << std::endl;
    }
    else
    {
        value = Arr[top];

        top--;
    }

    return value;
}

int Stack::peek(int pos)
{
    int value = -1;

    if(top - pos + 1 < 0)
    {
		std::cout << "Invalid position" << std::endl;
	}
	else
	{
		value = Arr[top - pos + 1];
	}

	return value;
}

int Stack::stackTop()
{
    if(top == -1)
    {
        return -1;
    }
    else
    {
        return Arr[top];
    }
}

bool Stack::isEmpty()
{
	if(top == -1)
	{
		return true;
	}
	
	return false;
}

bool Stack::isFull()
{
	if(top == size - 1)
	{
		return true;
	}
	
	return false;
}