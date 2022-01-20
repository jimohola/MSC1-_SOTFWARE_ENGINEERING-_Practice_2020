#include <iostream>

int * pointer_max_value(int array[], int size);

int main()

{
    std::cout << "<<<<  POINTER : MAX VALUE >>>>" << std::endl;

    int S;
    std::cout << "Enter number of data values : " << std::endl;
    std::cin >> S;

    int ary[S];

    for (int i = 0; i < S; i++)
    {
        std::cout << "Enter value >> " << i << std::endl;
        std::cin >> ary[i];
    }

    int * max_v = pointer_max_value(ary,S);
    std::cout << *max_v;

}


int * pointer_max_value(int ary[], int S)
{
    int * max = ary;

    for (int i = 0; i < S; i++)
    {
        if (*max < ary[i])
            *max = ary[i];
    }

   return max;

}

