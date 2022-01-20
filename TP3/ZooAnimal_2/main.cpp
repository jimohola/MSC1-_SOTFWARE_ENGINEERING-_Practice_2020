#include <iostream>

using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal
{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // destroy function
     void isMotherOf (ZooAnimal& mother){
         this->mother=&mother;
     }

    void changeWeight (int pounds);
    inline void changeWeightDate (int today){
        this->weightDate = today;
     }

    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);

};


void ZooAnimal::Create(char * Name, int CageNum, int WeightDate, int Weight)
{
    this->name = Name;
    this->cageNumber = CageNum;
    this->weightDate = WeightDate;
    this->weight = Weight;
}

inline int ZooAnimal::reptWeightDate()
{
    return this->weightDate;
}

// -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
    return name;
}

int main()
{
    std::cout << "<<<<        ZooAnimal #2        >>>>" << std::endl;

    ZooAnimal child_Dog, mother_Dog;
    child_Dog.Create("Cherry", 600, 95, 35);
    mother_Dog.Create("Mabel", 900, 80, 150);
    child_Dog.isMotherOf(mother_Dog);
   std:: cout << "Cherry's weightDate : " << child_Dog.reptWeightDate() << std::endl;
   std:: cout << "The name of joe's mother is: " << mother_Dog.reptName() << std::endl;

}













