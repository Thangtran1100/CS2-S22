/*
	Program Name: lab2.cpp
	Programmer: Dai Tran
	Date: 2/19/2022
	Version: 1.2
	Description: Add another pointer which points to the r pointer in the pointers to pointers example. Then display the results for all steps.
*/

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    
    //Pointer p point to x
    int *p = &x;

    *p = 6;

    //Pointer q point to p
    int **q = &p;

    //Pointer r point to q
    int ***r = &q;

    //Print the value of pointer p
    cout << *p << endl;

    //Print the address of pointer q
    cout << *q << endl; 

    //Print the value of pointer q
    cout << *(*q) << endl;

    //Print the address of pointer r
    cout << *(*r) << endl;

    //Print the value of pointer r
    cout << *(*(*r)) << endl;

    ***r = 10;

    cout << x << endl;

    **q = *p + 2;

    cout << x << endl;

    //Pointer z point to r
    int ****z = &r;

    //Print the address of pointer z
    cout << *(*(*z)) << endl;

    //Print the value of pointer z
    cout << *(*(*(*z))) << endl;
}