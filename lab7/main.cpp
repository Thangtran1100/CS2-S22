// CPP program to check for balanced brackets.
#include "balance.h"

// function to check if brackets are balanced


// Driver code
int main()
{
	string expr = "{()}[])";

	// Function call
	if (areBracketsBalanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
