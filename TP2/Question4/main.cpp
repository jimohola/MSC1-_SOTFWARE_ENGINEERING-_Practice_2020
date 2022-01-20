#include <iostream>


void PascalTriangle(int size);

int main()
{
    std::cout << "<<<<         PASCLA TRIANGLE        >>>>" << std::endl;

    int S;
    std::cout << "Enter pascal triangle size : ";
    std::cin>> S;
    PascalTriangle(S);
    return 0;
}


void PascalTriangle(int S)
{
    int ary[S][S];

    for (int line = 0; line < S; line++)
    {
        for (int i = 0; i <= line; i++)
        {
            if (line == i || i == 0)
                ary[line][i] = 1;
            else
                ary[line][i] = ary[line - 1][i - 1] +
                ary[line - 1][i];
            std::cout << ary[line][i] << " ";
        }
        std::cout << "\n";
    }
}



