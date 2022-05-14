#include <iostream>
#include <string>

using namespace std;

//Function that checks whether string passed is a Palindrome or not
bool isPalindrome(string str, int start, int end)
{
    //Base Condition
    if(end <= start)
    {
        return true;
    }

    //If current character is not an alphabet
    if(!isalpha(str[start]))
    {
        //Updating start position
        start += 1;

        //Recursive call
        return isPalindrome(str, start++, end);
    }

    //If current character is not an alphabet
    if(!isalpha(str[end]))
    {
        //Updating end position
        end -= 1;

        //Recursive call
        return isPalindrome(str, start, end--);
    }

    //If the characters are not same
    if(tolower(str[start]) != tolower(str[end]))
    {
        return false;
    }

    //Updating positions
    start = start + 1;
    end = end - 1;

    //Recursive call
    return isPalindrome(str, start, end);
}


//Main function
int main()
{
    string str;

    //Get input from user
    cout << "Enter a string: ";
    getline(cin, str);

    //Checking palindrome
    if(isPalindrome(str, 0, strlen(str.c_str())-1))
    {
        cout << "\nPalindrome\n";
    }
    else
    {
        cout << "\nNot Palindrome\n";
    }

    return 0;
}



