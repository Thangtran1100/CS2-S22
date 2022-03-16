#include<iostream>
#include "Employee.h"

using namespace std;

int main()
{
    ProductionWorker worker1("John Doe", 243, "02/26/2022", 1, 15);

    ProductionWorker *worker2 = &worker1;

    cout << static_cast<Employee *>(worker2)->getEmployeeName() << endl;
    
    return 0;
}