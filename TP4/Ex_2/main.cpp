#include <iostream>

class data{
   public:
   int nu1,nu2;
   data(int number1,int number2){
   nu1=number1;nu2=number2;
    }
    int sum_num(){return nu1+nu2;}
};


int main (){

    std::cout << "<<<<        Addition of two numbers        >>>>" << std::endl;
    int n1;
    int n2;
    std::cout<<"Input first number: ";
    std::cin>>n1;
    std::cout<<"Input second number: ";
    std::cin>>n2;


    data set_nu(n1,n2);
    std::cout << "The result of the addition = "<< set_nu.sum_num()<<"\n"<< std::endl;


    return 0;
}
