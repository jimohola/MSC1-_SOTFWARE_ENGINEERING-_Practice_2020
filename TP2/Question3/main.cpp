#include <iostream>

void sort_tab(int* tab)

{
     std::cout << "<<<<        To Sort 10 integer values using Functions        >>>>" << std::endl;

     int Grt = tab[0];  // "Grt" for Greatest
     int sml = tab[0];  // "Sml" for smallest
     int v = 10, index = 0;
     int sorted_tab[10] = { 0 };
     int p = -1;

     while (v--)
     {
         p++;
         for (int i = 0; i < 10; i++)
         {
             if (tab[i] > Grt)
             {
                 Grt = tab[i];
                 index = i;
             }
             if (p == 0)
             {
                if (tab[i] < sml)
                    sml = tab[i];
             }
         }
         tab[index] = sml;
         sorted_tab[p] = Grt;
         Grt = tab[0];
         index = 0;
     }

     for (int i = 0; i < 10; i++)
         std::cout << sorted_tab[i] << " ";
}

int main()
{
    int tab[10] = { 234, 56, 876, 4, 7, 1, 98, 34, 6, 5 };
    sort_tab(tab);
}
