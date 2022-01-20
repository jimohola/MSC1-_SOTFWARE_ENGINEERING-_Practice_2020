#include <iostream>

int main()
{
    std::cout << "<<<<     Program that will prompt the user to input ten integer values      >>>>" << std::endl;

    int Sml, Grt, mov_index, mov_max;
    int ary[10] = {0};
    int mov_ary[10] = { 0 };

    std::cout << "Enter 10 values : " << std::endl;
    int i;
    for (i = 0; i < 10; i++)
    {
        std::cin >> ary[i];
        for (int n = 0; n < i; n++)
        {
            if (ary[i] == ary[n])
            {
                mov_ary[n]++;
                break;
            }
        }
    }

    Sml = ary[0];
    Grt = ary[0];
    mov_max = mov_ary[0];
    mov_index = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cout << mov_ary[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (ary[i] > Grt)
            Grt = ary[i];
        if (ary[i] < Sml)
            Sml = ary[i];
        if (mov_ary[i] > mov_max)
        {
            mov_index = i;
            mov_max = mov_ary[i];
        }


    }


    if (mov_max == 0)
    {
        std::cout << " No Value occurs the most. All values occurs ones" << std::endl;
        std::cout << "Smallest value : " << Sml << "Greatest value :" << Grt << std::endl;
    }

    else
        std::cout << "Smallest value = " << Sml << std::endl;
        std::cout << "Greatest value = " << Grt << std::endl;
        std::cout <<"Most occured values is = " << ary[mov_index] <<std::endl;

}
