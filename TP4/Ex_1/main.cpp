#include <iostream>

class CRectangle {

   public:
   int p,q;
   int area(){return p*q;}

};



int main () {

  std::cout << "<<<<        Area of the Rectangle        >>>>" << std::endl;
  CRectangle rect;
  std::cout<<"Input length of rectangle: ";
  std::cin>>rect.p;
  std::cout<<"Input breadth of rectangle: ";
  std::cin>>rect.q;
  std::cout <<"Area of the rectangle = "<< rect.area()<< std::endl;


  return 0;
}

