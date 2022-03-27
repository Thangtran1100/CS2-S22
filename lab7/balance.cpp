#include<iostream>
#include "balance.h"

void CheckBalance::pop(char &ch)
{
	Node *temp;
	if(isEmpty())
	{
		std::cout << "The stack is empty" << std::endl;
	}
	else
	{
		ch = top->value;
		
		temp = top->next;
		
		delete top;
		
		top = temp;
	}
}

bool CheckBalance::isEmpty()
{
	if(top == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void CheckBalance::push(char ch)
{
	Node *n = new Node;
	
	n->value = ch;
	
	if(isEmpty())
	{
		top = n;
		
		n->next = NULL;
	}
	else //insert new Node before top
	{
		n->next = top;
		
		top = n;
	}
}

void CheckBalance::display()
{
	Node *curr = top;
	
	while(curr != NULL)
	{
		std::cout << curr->value << std::endl;
		
		curr = curr->next;
	}
}

bool areBracketsBalanced(std::string expr)
{
	CheckBalance *s;
	char x;

	// Traversing the Expression
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '['
			|| expr[i] == '{')
		{
			// Push the element in the stack
			s->push(expr[i]);
			continue;
		}

		// IF current current character is not opening
		// bracket, then it must be closing. So stack
		// cannot be empty at this point.
		if (s->isEmpty())
			return false;

		switch (expr[i]) {
		case ')':
			
			// Store the top element in a
			x = s->CheckBalance(x);
			s->pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			// Store the top element in b
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':

			// Store the top element in c
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	// Check Empty Stack
	return (s.empty());
}