#include<iostream>
#include<vector>

std::vector<int> digitize(unsigned long n) 
{        
  std::vector<int> dig;
  
    while (n != 0)
    {
        dig.push_back(n%10);
        n = n / 10;
    }
  
  
  return dig;
}

int main()
{
    std::vector<int> d1;

    d1 = digitize(35231);

    for(const int &i : d1)
    {
      std::cout << i << " ";
    }

    return 0;
}

