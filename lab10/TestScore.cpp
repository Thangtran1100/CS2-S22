#include "TestScore.h"
#include <iostream>
#include <iomanip>
#include "NegativeScore.h"
#include "LargeScore.h"
// Default Constructor
TestScore::TestScore()
{
    testScore[0] = 0;
    testScore[1] = 0;
}

// Constructor that accepts an array of test scores
TestScore::TestScore(int score[], int size)
{
    for (int i = 0; i < size; i++)
        testScore[i] = score[i];
}

// Get average and return it
float TestScore::getAverage()
{
    float average = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (testScore[i] < 0)
        {
            throw NegativeScore(testScore[i]);
        }
        else if (testScore[i] > 100)
        {
            throw LargeScore(testScore[i]);
        }
        else
        {
            average = average + testScore[i];
        }
    }
    return average / SIZE;
}