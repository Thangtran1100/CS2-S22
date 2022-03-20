#include<iostream>

template<typename T>
T square(T num)
{
    return num * num;
}

int main()
{
    int x =3;

    double y = 1.2;

    std::cout << square(x) << std::endl;

    std::cout << square(y) << std::endl;


}

