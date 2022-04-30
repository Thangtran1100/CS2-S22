#include <iostream>
#include <string>

int counting(std::string st, char c)
{
    if (st.length() == 0)
    {
        return 0;
    }
    else if (st.at(0) == c)
    {
        return 1 + counting(st.substr(1), c);
    }
    else
    {
        return counting(st.substr(1), c);
    }
}

int main()
{
    std::string st = "abcddddefdddd";

    std::cout << counting(st, 'd') << std::endl;

    return 0;
}