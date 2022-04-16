#ifndef STACK_H
#define STACK_H

#include<iostream>
#include<vector>

class Stack
{
private:
    int size;

    int top = -1;

    int *Arr;
public:
    Stack(int);
    ~Stack();
    void display();
    void push(int);
    int pop();
    int peek(int);
    int stackTop();
    bool isEmpty();
    bool isFull();
};

#endif