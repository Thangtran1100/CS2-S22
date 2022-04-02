#include<iostream>
#include "balance.h"

int main()
{
	char E[] = "((a+b)*(c-d))";

    if(isBalanced(E))
	{
		std::cout << "balanced" << std::endl;
	}
	else
	{
		std::cout << "not balanced" << std::endl;
	}
 
    char F[] = "((a+b)*(c-d)))";

    if(isBalanced(F))
	{
		std::cout << "balanced" << std::endl;
	}
	else
	{
		std::cout << "not balanced" << std::endl;
	}
 
    char G[] = "(((a+b)*(c-d))";

    if(isBalanced(G))
	{
		std::cout << "balanced" << std::endl;
	}
	else
	{
		std::cout << "not balanced" << std::endl;
	}

	
	
	return 0;
}
