#ifndef STACK_H
#define STACK_H
#define MAX = 1000

class IntStack
{
private:
	int *stackArray;
	int size; //Size of array
	int top; //Top of stack or array index
public:
	IntStack(int); //Constructor
	IntStack(const IntStack &); //Copy constructor
	~IntStack(); //Destructor
	//Operations
	void display(); //Prototype
	void push(int);
	int pop();
	bool isFull() const;
	bool isEmpty() const;
};

#endif
