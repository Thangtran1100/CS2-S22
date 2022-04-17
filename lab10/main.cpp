
#include <iostream>
#include "TestScore.h"
#include "NegativeScore.h"
#include "LargeScore.h"
using namespace std;

int main()
{
    int score[2]; // Array to hold scores
    // Get test scores from user
    cout << "Enter " << 2 << " test scores ";
    for (int i = 0; i < 2; i++)
    {
        cin >> score[i];
    }
    // Check for exceptions
    try
    {
        TestScore test1(score);
        cout << "The average of the scores is " << test1.getAverage() << endl; // This returns a wrong number
    }
    catch (NegativeScore &e) // TestScores has no member NegativeScore
    {
        cout << "Exception Thrown: " << e.getScore() << " is an negative value.\n";
    }
    catch (LargeScore &e) // TestScores has no member NegativeScore
    {
        cout << "Exception Thrown: " << e.getScore() << " is a value larger than 100.\n";
    }
    return 0;
}