#include "inventory.h"

Stack::Stack()
{
    rear = -1;
}

void Stack::push()
{
    if (rear >= SIZE)
    {
        std::cout << "Inventory is full";
    }
    else
    {
        rear++;

        std::cout << "Enter Serial Num: ";

        std::cin >> storage[rear].serialNumber;

        std::cout << "Enter Manufacturing Date(MM/DD/YYYY): ";

        std::cin >> storage[rear].manufactDate;

        std::cout << "Enter Lot Num: ";

        std::cin >> storage[rear].lotNum;
    }
}

void Stack::pop()
{
    if (rear < 0)
    {
        std::cout << "Inventory is empty";
    }
    else
    {
        std::cout << "\nRemoved part details:\n";

        std::cout << "\nSerial Num: " << storage[rear].serialNumber;

        std::cout << "\nManufacturing Date: " << storage[rear].manufactDate;

        std::cout << "\nLot Num: " << storage[rear].lotNum;

        rear--;
    }
}

void Stack::display()
{
    for(int i = 0; i <= rear; i++)
    {
        std::cout << "\nSerial Num: " << storage[i].serialNumber;

        std::cout << "\nManufacturing Date: " << storage[i].manufactDate;

        std::cout << "\nLot Num: " << storage[i].lotNum;

        std::cout << std::endl;
    }
}

void menu()
{
    Stack inventory;

    int choice;

    do
    {
        std::cout << "\n\nMENU\n"
                  << "1. Store\n"
                  << "2. Remove\n"
                  << "3. Exit\n\n"
                  << "Enter your choice: ";

        std::cin >> choice;

        switch (choice)
        {
            case 1:
            {
                inventory.push();

                break;
            }
            case 2:
            {
                inventory.pop();

                break;
            }
            case 3:
            {
                std::cout << "\nInventory:";

                inventory.display();

                break;
            }
        }
    } while (choice != 3);
}