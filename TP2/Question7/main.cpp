#include <iostream>

int * sort_acend_tab(int* tab, int size)
{
     std::cout << "<<<< To sort an array of ten integer values in ascending order using Functions >>>>" << std::endl;

    int * x = tab;
    int * y = tab + 1;
    int temp;

    for(int i=0;i<=size;i++)
    {
        for(int q=i+1;q<size;q++)
        {
            if(*tab > *y)
            {
                temp  = *tab;
                *tab = *y;
                *y =temp;
            }
            tab++;
            y++;
        }
        tab = x;
        y = x + 1;
    }

    return tab;
}

int main()
{
    int tab[15] = {  234, 56, 876, 4, 7, 1, 98, 34, 6, 5, 300, 20, 13, 75, 125 };
    int *sorted = sort_acend_tab(tab, 15);

    for(int i=0; i<15;i++)
        std::cout << *sorted++ << " ";

}
