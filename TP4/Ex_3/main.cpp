#include <iostream>
using namespace std;

class Imagin{
    public:

    double p,q;

    Imagin(double np, double nq){

    p=np;q=nq;}
};

int main(){

    std::cout << "<<<<        Real and Imaginary part of two complex numbers        >>>>" << std::endl;
    double num1,num2;
    std::cout << "** First number ** \n";
    std::cout<< "Input the real part: ";
    std::cin>> num1;
    std::cout<< "Input the imaginary part: ";
    std::cin>> num2;
    Imagin number1(num1,num2);
    std::cout << "** Second number ** \n";
    double num3,num4;
    std::cout<< "Input the real part: ";
    std::cin>> num3;
    std::cout<< "Input the imaginary part: ";
    std::cin>> num4;

    Imagin number2(num3,num4);

    double real;

    real = number1.p +number2.p;

    double imagin;

    imagin = number2.q + number1.q;

    std::cout << "The sum of the real parts = "<< real << "\n";
    std::cout << "The sum of the imaginary parts = "<<imagin<< std::endl;


    return 0;
}
