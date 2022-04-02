#include<iostream>
#include "balance.h"
#include<cstring>

Stack::Stack() 
{
    top = nullptr;
}
 
Stack::~Stack() 
{
    Node* temp = top;

    while (top)
	{
        top = top->next;

        delete temp;

        temp = top;
    }
}
 
void Stack::push(char ch) 
{
    Node* temp = new Node;

    if (temp == nullptr)
	{
        std::cout << "Stack Overflow" << std::endl;
    } 
	else 
	{
        temp->value = ch;

        temp->next = top;

        top = temp;
    }
}
 
char Stack::pop() 
{
    Node* temp;

    char ch = -1;

    if (top == nullptr)
	{
        std::cout << "Stack Underflow" << std::endl;
    } 
	else 
	{
        temp = top;

        ch = temp->value;

        top = top->next;

        delete temp;
    }

    return ch;
}

bool Stack::isEmpty()
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

void Stack::display()
{
	Node *curr = top;
	
	while(curr != NULL)
	{
		std::cout << curr->value << std::endl;
		
		curr = curr->next;
	}
}

//check parentheses function
bool isBalanced(char* exp)
{
    Stack stk;

	//checking parentheses in stack stk
    for (int i=0; i < strlen(exp); i++)
	{
        if (exp[i] == '(')
		{
            stk.push(exp[i]);
        } 
		
		if (exp[i] == ')')
		{
            if (stk.isEmpty())
			{
                return false;
            } 
			else 
			{
                stk.pop();
            }
        }
    }

	if(stk.isEmpty())
	{
		return true; //return true if balance
	}
	else
	{
		return false; //return false if not balance
	}
}
