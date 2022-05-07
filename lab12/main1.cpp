#include <iostream>
#include <string>

using namespace std;

//Function that checks whether string passed is a Palindrome or not
bool isPalindrome(string str, int startPos, int endPos)
{
    //Base Condition
    if(startPos >= endPos)
    {
        return true;
    }

    //If current character is not an alphabet
    if(!isalpha(str[startPos]))
    {
        //Updating start position
        startPos += 1;

        //Recursive call
        return isPalindrome(str, startPos++, endPos);
    }

    //If current character is not an alphabet
    if(!isalpha(str[endPos]))
    {
        //Updating end position
        endPos -= 1;

        //Recursive call
        return isPalindrome(str, startPos, endPos--);
    }

    //If the characters are not same
    if(tolower(str[startPos]) != tolower(str[endPos]))
    {
        return false;
    }

    //Updating positions
    startPos = startPos + 1;
    endPos = endPos - 1;

    //Recursive call
    return isPalindrome(str, startPos, endPos);
}


//Main function
int main()
{
    string str;

    //Reading a string from user
    cout << "\n\n Enter a string: ";
    getline(cin, str);

    //Checking for palindrome
    if(isPalindrome(str, 0, strlen(str.c_str())-1))
    {
        cout << "\n Is a Palindrome!!!! \n";
    }
    else
    {
        cout << "\n Is not a Palindrome!!!! \n";
    }

    cout << "\n\n";
    return 0;
}