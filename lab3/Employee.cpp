#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee()
{
    employee_name = "";

    employee_number = 0;

    hire_date = "";
}

Employee::Employee(string name, int number, string date)
{
    employee_name = name;

    employee_number = number;

    hire_date = date;
}

string Employee::getEmployeeName()
{
    return employee_name;
}

int Employee::getEmployeeNumber()
{
    return employee_number;
}

string Employee::getHireDate()
{
    return hire_date;
}

void Employee::setEmployeeName(string e_name)
{
    employee_name = e_name;
}

void Employee::setEmployeeNumber(int e_number)
{
    employee_number = e_number;
}

void Employee::setEmployeeDate(string e_date)
{
    hire_date = e_date;
}

ProductionWorker::ProductionWorker(string e_name, int e_number, string hire_date, int e_shift, double e_rate): Employee(e_name, e_number, hire_date)
{
    setEmployeeName(e_name);

    setEmployeeNumber(e_number);

    setEmployeeDate(hire_date);

    shift = e_shift;

    pay_rate = e_rate;
}       

int ProductionWorker::getShift()
{
    return shift;
}

double ProductionWorker::getPayRate()
{
    return pay_rate;
}

void ProductionWorker::setShift(int e_shift)
{
    shift = e_shift;
}

void ProductionWorker::setPayRate(double e_rate)
{
    pay_rate = e_rate;
}
