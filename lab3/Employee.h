#pragma once

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<string>

using namespace std;

class Employee
{
protected:
    string employee_name;

    int employee_number;

    string hire_date;
public:
    Employee();
    Employee(string name, int number, string date);
    string getEmployeeName();
    int getEmployeeNumber();
    string getHireDate();
    void setEmployeeName(string e_name);
    void setEmployeeNumber(int e_number);
    void setEmployeeDate(string e_date);
};

class ProductionWorker: public Employee
{
protected:
    int shift;

    double pay_rate;
public:
    ProductionWorker(string e_name, int e_number, string hire_date, int e_shift, double e_rate);
    int getShift();
    double getPayRate();
    void setShift(int e_shift);
    void setPayRate(double e_rate);
};

#endif
