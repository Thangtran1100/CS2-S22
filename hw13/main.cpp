#include "info.h"

int main()
{
    PartInfo root(1042, "Motherboard");

    root.insertNode(1078, "CPU"); 

    root.insertNode(2508, "Power Supply"); 

    root.insertNode(3780, "Modem");

    root.insertNode(1038, "RAM"); 

    root.insertNode(1287, "Graphic Card");

    root.insertNode(1920, "Hard Disk");

    root.insertNode(4239, "USB Port");

    root.displayInOrder();

    int id;

    std::cout << "Enter the partID number to search: ";

    std::cin >> id;

    std::cout << root.searchPart(id) << std::endl;
    
    return 0;
}