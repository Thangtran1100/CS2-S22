#include<iostream>
#include "stack.h"

IntStack::IntStack(int sz) //Constructor
{
	stackArray = new int[sz];
	size = sz;
	top = -1; //index of array
}

//push function
void IntStack::push(int num)
{
	if(isFull())
	{
		std::cout << "The stack is full" << std::endl;
	}
	else
	{
		top++;
		stackArray[top] = num;
	}
}

//Display function
void IntStack::display()
{
	int t = top;
	while(t>=0)
	{
		std::cout << stackArray[t] << std::endl;
		t--;
	}
}

//Destructor
IntStack::~IntStack()
{
	delete [] stackArray;
}

//pop function
int IntStack::pop()
{
    int data;
	if(isEmpty())
	{
        std::cout << "The stack is empty" << std::endl;
	}
	else
	{
		data = stackArray[top];
		top--;
	}

    return data;
}

//isFull function
bool IntStack::isFull() const
{
	if(top == size - 1)
	{
		return true;
	}
	
	return false;
}

//isEmpty function
bool IntStack::isEmpty() const
{
	if(top == -1)
	{
		return true;
	}
	
	return false;
}

//Copy constructor assign and existing object to a new object)
IntStack::IntStack(const IntStack &obj)
{
	//create stackArray
	if(obj.size > 0)
	{
		stackArray = new int[obj.size];
	}
	else
	{
		stackArray = NULL;
	}
	
	//copy the size variable
	size = obj.size;
	
	//copy stack contents
	for(int count = 0; count < size; count++)
	{
		stackArray[count] = obj.stackArray[count];
	}
	
	top = obj.top;
}
