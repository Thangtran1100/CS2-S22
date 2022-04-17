#ifndef TESTSCORE_H
#define TESTSCORE_H

const int SIZE = 5;

class TestScore
{
private:
    int testScore[5];

public:
    // Default constructor
    TestScore();
    // Constructor
    TestScore(int[], int size = 5);
    // Accessor function
    float getAverage();
};
#endif
