#include <iostream>

int main()
{
     std::cout << "<<<< Program to accept five integer values from keyword >>>>" << std::endl;

    int ary[5];
    int * n = ary;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter value >> " << i << std::endl;
        std::cin >> *n++;

    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << ary[i] << " ";
    }


    return 0;
}
