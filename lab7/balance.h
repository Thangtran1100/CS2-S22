#ifndef BALANCE_H
#define BALANCE_H

#include<string>
 
class Stack{
private:
	struct Node
	{
		char value;
		Node *next;
	};

    Node* top;
public:
	//Default constructor
    Stack();

	//Destructor
    ~Stack();

	//Stack operations
    void push(char x);
    char pop();
    bool isEmpty();
    void display();
};

//check parentheses function
bool isBalanced(char*);

#endif