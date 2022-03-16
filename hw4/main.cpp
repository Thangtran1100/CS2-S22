/*
    Programmer: Dai Tran
    
    Program Name: homework4.cpp

    Date: 03/11/2022

    Version: 4.5

    Description: Design a class called NumDays. The class’s purpose is to store a value that represents a number of work hours and converts it to a number of days. 
    
    For example, 8 hours would be converted to 1 day. 12 hours would be converted to 1.5 days, and 18 hours would be converted to 2.25 days. 
    
    The class should have a constructor that accepts a member of hours, as well as member functions for storing and retrieving the hours and days. 
    
    The class should also have the following overloaded operators:

+   Addition operator. When two NumDays objects are added together, the overloaded +

     operator should return the sum of the two objects’ hours members.

-     Subtraction operator. When one NumDays object is subtracted from another, the overloaded – operator should return the difference of the two objects’  hours members.

++     Prefix and postfix increment operators. These operators should increment the

         number of hours stored in the object. When incremented, the number of days should

         be automatically recalculated.

--     Prefix and postfix decrement operators. These operators should decrement the number of hours stored in the object. When decremented, the number of days    should be automatically recalculated.
*/

#include <iostream>

using namespace std;

class NumDays
{
private:
    double hours;

    double day;

public:
    //Default Constructor
    NumDays()
    {
        hours = 0;

        day = 0;
    }

    NumDays(int hour)
    {
        hours = hour;

        day = hour / 8;
    }

    void convertDay()
    {
        day = hours / 8;
    }

    void setHours(double hours)
    {
        this->hours = hours;
    }

    double getHour()
    {
        return hours;
    }

    double getDay()
    {
        convertDay();

        return day;
    }

    //Overloading Operator
    NumDays operator + (const NumDays &day)
    {
        NumDays sum;

        sum.hours = this->hours + day.hours;
        
        return sum;
    }

    NumDays operator - (const NumDays &day)
    {
        NumDays sub;

        sub.hours = this->hours - day.hours;

        return sub;
    }

    // prefix
    const NumDays &operator ++ () 
    {
        ++hours;

        convertDay();

        return *this;
    }

    const NumDays &operator -- ()
    {
        --hours;

        convertDay();

        return *this;
    }

    // postfix
    const NumDays operator ++ (int) 
    {
        NumDays postplus(*this);

        ++hours;

        convertDay();

        return postplus;
    }

    const NumDays operator -- (int) 
    {
        NumDays postminus(*this);

        --hours;

        convertDay();

        return postminus;
    }
};

int main()
{
    NumDays day1(2), day2(10), day3, day4, day5;

    day3 = day2 - day1;

    cout << "Hour: " << day3.getHour() << " Day: " << day3.getDay() << endl;

    day3 = day1 + day2;

    cout << "Hour: " << day3.getHour() << " Day: " << day3.getDay() << endl;

    day4 = day3++;

    cout << "Hour: " << day4.getHour() << " Day: " << day4.getDay() << endl;

    day4 = ++day3;

    cout << "Hour: " << day4.getHour() << " Day: " << day4.getDay() << endl;

    day4 = day3--;

    cout << "Hour: " << day4.getHour() << " Day: " << day4.getDay() << endl;

    day4 = --day3;

    cout << "Hour: " << day4.getHour() << " Day: " << day4.getDay() << endl;

    day5 = day2 + day2 - day1;

    cout << "Hour: " << day5.getHour() << " Day: " << day5.getDay() << endl;

    return 0;
}
