/*
    Program Name: homework2.cpp
    Programmer: Dai Tran
    Date: 2/22/2022
    Version: 5.0
    Description: This program designed to determine the monthly payment on a home mortgage.
                 Input validation: Do not accept negative numbers for any of the loan values.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

template<class T>
class Mortgage_Payment
{
private:
    T principal;

    T rate;

    T term;

public:
    Mortgage_Payment()
    {
        principal = 0;

        rate = 0;

        term = 0;
    }

    Mortgage_Payment(T a, T b, T c)
    {
        principal = a;

        rate = b;

        term = c;
    }

    double getLoans()
    {
        cout << "Enter the principal amount: ";

        cin >> principal;

        return principal;
    }

    double getRate()
    {
        cout << "Enter the rate: ";

        cin >> rate;

        return rate;
    }

    double getTerm()
    {
        cout << "Enter the term: ";

        cin >> term;

        return term;
    }

    void setPrincipal(T loan)
    {
        if (loan > 0)
        {
            principal = loan;
        }
        else
        {
            cout << "Invalid loan amount" << endl;

            exit(EXIT_FAILURE);
        }
    }

    void setRate(T rate_input)
    {
        rate = rate_input / 1200;
    }

    void setTerm(T term_input)
    {
        term = term_input * 12;
    }

    double monthly_pay()
    {
        return principal * rate / (1.0 - pow(rate + 1, -term));
    }

    double total_pay()
    {
        return monthly_pay() * term;
    }
};

int main()
{
    Mortgage_Payment<double> amount;

    amount.setPrincipal(amount.getLoans());

    amount.setRate(amount.getRate());

    amount.setTerm(amount.getTerm());

    cout << endl
         << setprecision(2) << fixed << amount.monthly_pay() << endl;

    cout << amount.total_pay() << endl;
}