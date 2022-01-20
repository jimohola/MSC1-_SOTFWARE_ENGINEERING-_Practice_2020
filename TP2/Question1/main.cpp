#include <iostream>

void Menu()
{
    std::cout << "<<<<         CALCULATOR MENU        >>>>" << std::endl;

    std::cout << "Operation Menu" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Modulus" << std::endl;
}


int Add(int m, int n)
{
    return m + n;
}

int Subtract(int m, int n)
{
    return m - n;
}

int Multiply(int m, int n)
{
    return m * n;
}

int Divide(int m, int n)
{
    return m / n;
}

int Modulus(int m, int n)
{
    return m % n;
}



int main()
{
    int option = 0;
    char press_key;

    Menu();

    while (true)
    {
        std::cout << "Select the operation you want to carry out : " << std::endl;
        std::cin >> option;
        std::cin.clear();
        if (option > 5 || option< 1)
        {
            std::cout << "No operation available. Please select a number between 1-5";
            continue;
        }
        std::cout << "Select two numbers for the operation" << std::endl;

        float number1, number2;
        std::cout << "Imput your first number: ";
        std::cin >> number1;
        std::cout << "Imput your second number: ";
        std::cin >> number2;
        std::cin.clear();


        switch (option)
        {
            case 1: std::cout << Add(number1, number2) << std::endl;
                break;

            case 2: std::cout << Subtract(number1, number2) << std::endl;
                break;

            case 3: std::cout << Multiply(number1, number2) << std::endl;
                break;

            case 4: std::cout << Divide(number1, number2) << std::endl;
                break;
            case 5: std::cout << Modulus(number1, number2) << std::endl;
                break;
        }

        std::cout << "If you want to perform another operation, press y" << std::endl;
        std::cin >> press_key;
        std::cin.clear();
        if (press_key == 'y')
            ;
        else
            break;

    }

}
