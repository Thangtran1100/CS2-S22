#ifndef BALANCE_H
#define BALANCE_H

#include<string>

class CheckBalance
{
private:
	struct Node
	{
		char value;
		Node *next;
	};
	
	Node *top;  //Same as head pointer in linked list
public:
	CheckBalance()
	{
		top = NULL;
	}

	CheckBalance(char ch)
	{
		top->value= &ch;
	}
	
	~CheckBalance(); // destructor
	
	//Stack operations
	void push(char);
	void pop(char&);
	bool isEmpty();
	void display();
	bool areBracketsBalanced(std::string);
};

#endif