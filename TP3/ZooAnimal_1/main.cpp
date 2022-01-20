#include <iostream>
#include <cstring>

//using namespace std;

class ZooAnimal
{ 
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    void Create(char * Name, int CageNum, int WeightDate, int Weight) // Create Function (Constructor)
    {
        this->name = Name;
        this->cageNumber = CageNum;
        this->weightDate = WeightDate;
        this->weight = Weight;
    }
    void Print()
    {
        std::cout << this->name << " " << this->cageNumber << " " << this->weightDate << " " << this->weight << std::endl;
    }
    void Destroy (); // destroy function
    char* reptName ();

    // -------- member function to return the number of days
    // -------- since the animal was last weighed
    int daysSinceLastWeighed (int today)
    {
        int startday, thisday;
        thisday = today/100*30 + today - today/100*100;
        startday = weightDate/100*30 + weightDate - weightDate/100*100;
        if (thisday < startday)
            thisday += 360;
        return (thisday-startday);
    }
};

void ZooAnimal::Destroy ()
{
    delete [] name;
}

// -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
    return name;
}


// ========== an application to use the ZooAnimal class
int main()
{
    std::cout << "<<<<        ZooAnimal #1        >>>>" << std::endl;

    ZooAnimal ca;
    ca.Create("Cadel", 5, 25,35);
    ca.Print();
   std:: cout << ca.daysSinceLastWeighed(200) <<std:: endl;
   std::cout << "This animal's name is " << ca.reptName() << std::endl;


    return 0;

}
