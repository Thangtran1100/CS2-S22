/*
    Program Name: homework1.cpp
    Programmer: Dai Tran
    Date: 2/17/2022
    Version: 4.5
    Description: This program designed to hold the budget spend during a month for each category by asking
    user to input the data, then display the information on the screen
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
Constants for budget amounts

Housing                     500.0

Utilities                   150.0

Household Expenses          65.0

Transportation              50.0

Food                        250.0

Medical                     30.0

Insurance                   100.0

Entertainment               150.0

Clothing                    75.0

MISC                        50.0
*/

//This array contain constants for budget amounts as standard amounts
float standardBudget[10] = {500.0, 150.0, 65.0, 50.0, 250.0, 30.0, 100.0, 150.0, 75.0, 50.0};

struct Budget
{
    float housing;

    float utilities;

    float h_hold_expen;

    float trans;

    float food;

    float med;

    float insurance;

    float entertain;

    float clothing;

    float misc;
};


//These are prototypes
void getBudget(Budget &inputBudget);
float* arr_budget(float arr[10], Budget budget);
float totalBudget(float arr[]);
void compareBudget(float arr[], float standardBudget[], int index);
void showBudget(float arr[], Budget budget);

int main()
{
    Budget budget;

    float* arr = new float[10];

    getBudget(budget);

    arr = arr_budget(arr, budget);

    showBudget(arr, budget);

    delete arr;

    return 0;
}

//This function will ask user to input the budget amount and store to structure
void getBudget(Budget &inputBudget)
{
    cout << "Information Input" << endl;
    
    cout << "Enter Housing Budget: ";
    cin >> inputBudget.housing;

    cout << "Enter Utilities Budget: ";
    cin >> inputBudget.utilities;

    cout << "Enter Household Expenses Budget: ";
    cin >> inputBudget.h_hold_expen;

    cout << "Enter Transportation Budget: ";
    cin >> inputBudget.trans;

    cout << "Enter Food Budget: ";
    cin >> inputBudget.food;

    cout << "Enter Medical Budget: ";
    cin >> inputBudget.med;

    cout << "Enter Insurance Budget: ";
    cin >> inputBudget.insurance;

    cout << "Enter Entertainment Budget: ";
    cin >> inputBudget.entertain;

    cout << "Enter Clothing Budget: ";
    cin >> inputBudget.clothing;

    cout << "Enter MISC Budget: ";
    cin >> inputBudget.misc;
}

//This function will convert the member variabes in structure to an array for calculating step
float* arr_budget(float arr[10], Budget budget)
{
    

    arr[0] = budget.housing;

    arr[1] = budget.utilities;

    arr[2] = budget.h_hold_expen;

    arr[3] = budget.trans;

    arr[4] = budget.food;

    arr[5] = budget.med;

    arr[6] = budget.insurance;

    arr[7] = budget.entertain;

    arr[8] = budget.clothing;

    arr[9] = budget.misc;

    return arr;
}

//This function calculate the total budget
float totalBudget(float arr[])
{
    float sum = 0;

    for(int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    return sum;
}

//This function will compare each category to know if your budget is over or under
void compareBudget(float arr[], float standardBudget[], int index)
{
    float sub = arr[index] - standardBudget[index];

    if(sub < 0)
    {
        cout << "\nYour budget is under the standard budget for this category by $" << abs(sub) << endl;
    }
    else if(sub > 0)
    {
        cout << "\nYour budget is over the standard budget for this category by $" << sub << endl;
    }
}

//This function will display the information on the screen
void showBudget(float arr[], Budget budget)
{
    cout << string(70, '-') << endl;

    cout << "Your monthly budget report:" << endl;

    cout << "\nHousing             " << setw(43) << '$' << budget.housing << endl;

    compareBudget(arr, standardBudget, 0);

    cout << "\nUtilities           " << setw(43) << '$' << budget.utilities << endl;

    compareBudget(arr, standardBudget, 1);

    cout << "\nHousehold Expenses  " << setw(43) << '$' << budget.h_hold_expen << endl;

    compareBudget(arr, standardBudget, 2);

    cout << "\nTransportation      " << setw(43) << '$' << budget.trans << endl;

    compareBudget(arr, standardBudget, 3);

    cout << "\nFood                " << setw(43) << '$' << budget.food << endl;

    compareBudget(arr, standardBudget, 4);

    cout << "\nMedical             " << setw(43) << '$' << budget.med << endl;

    compareBudget(arr, standardBudget, 5);

    cout << "\nInsurance           " << setw(43) << '$' << budget.insurance << endl;

    compareBudget(arr, standardBudget, 6);

    cout << "\nEntertainment       " << setw(43) << '$' << budget.entertain << endl;

    compareBudget(arr, standardBudget, 7);

    cout << "\nClothing            " << setw(43) << '$' << budget.clothing << endl;

    compareBudget(arr, standardBudget, 8);

    cout << "\nMISC                " << setw(43) << '$' << budget.misc << endl;

    compareBudget(arr, standardBudget, 9);

    cout << string(70, '*') << endl;

    float total_budget = totalBudget(arr);

    float total_std_budget = totalBudget(standardBudget);

    if(total_budget < total_std_budget)
    {
        cout << "\nYour total budget is $" << total_budget << endl;

        cout << "\nYour total budget is under the total standard budget by $" << total_std_budget - total_budget << endl;
    }
    else if (total_budget > total_std_budget)
    {
        cout << "\nYour total budget is $" << total_budget << endl;

        cout << "\nYour total budget is over the total standard budget by $" << total_budget - total_std_budget << endl;
    }
    else
    {
        cout << "\nYou are on the budget." << endl;
    }

    cout << string(70, '-') << endl;

    cout << "End of Report." << endl;
}