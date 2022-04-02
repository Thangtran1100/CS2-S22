#pragma once
#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
#define SIZE 20

class inventory
{
public:
    int serialNumber;

    int lotNum;
    
    std::string manufactDate;
};

class Stack
{
private:
    inventory storage[SIZE];

    int rear;
public:
    Stack();

    void push();
    
    void pop();

    void display();
};

void menu();

#endif