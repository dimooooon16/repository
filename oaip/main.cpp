#include <iostream>
#include <string>

using namespace std;

class House {
private:
    string address;
    string type;
    int floors;
    int floor;
    int rooms number;
    double total area;
    double living area;
public:
    void setAddress(string address)
    {
        this->address=address;
    }
    string adress()
    {
        return adress;
    }

        void setType(string type)
    {
        this->type=type;
    }
    string type()
    {
        return type;
    }

        void setFloors(int floors)
    {
        this->floors=floors;
    }
    int floors()
    {
        return floors;
    }

        void setFloor(int floor)
    {
        this->floor=floor;
    }
    int floor()
    {
        return floor;
    }

        void setRoomsNumber(int rooms number)
    {
        this->rooms number=rooms number;
    }
    int rooms number()
    {
        return rooms number;
    }

     void setTotalArea(double total area)
    {
        this->total area=total area;
    }
    double total area()
    {
        return total area;
    }

     void setLivingArea(double living area))
    {
        this->living area=living area;
    }
    double living area()
    {
        return living area;
    }

    void printInfo()
    {
        cout<<"адрес"<<adress<<endl;
        cout<<"тип"<<type<<endl;
        cout<<"количество этажей"<<floors number<<endl;
        cout<<"этаж"<<floor<<endl;
        cout<<"количество комнат"<<rooms number<<endl;
        cout<<"общая площадь"<<total area<<endl;
        cout<<"жилая площадь"<<living area<<endl;
    }
