#include<iostream>
using namespace std;

// class vihicle
class Vehicle {
    public:
    // contsructor
    Vehicle() {
        cout << "I am constructor of the Vehicle class" << endl;
    }
    int numWheels;
    string make;
    string model;
    string toString() {
        return make + " -> " + model;
    }

    // desstructor also
    virtual ~Vehicle() {
        cout << "I am destructor of Vehicle"<<endl;
    }
};

// second class
// we inherit the Vehivle class to give there attributes and methods to accese gun utaro
class Car : public Vehicle{
    public:
    Car() {
        cout << "Car contsructor"<< endl;
    }
    bool sunroof;
    int airbags;
    int safRating;
    int topspeed;
    ~Car() {
        cout << "I am destructor of Car"<<endl;
    }
};
class Bus : public Vehicle{
    public:
    Bus() {
        cout << "Bus contsructor"<< endl;
    }
    bool sunroof;
    int airbags;
    int safRating;
    int topspeed;
    ~Bus() {
        cout << "I am destructor of Bus"<<endl;
    }
};

class Staic_wala {
    public:
    Staic_wala() : val(0){
        cout << "Constructor of static"<<endl;
    }

    int val;

};

int main()
{
    // Car c;
    // Bus s;
    // In heap hamare hisab se kam hoga
    // Vehicle *ptr_car = new Car;
    // Vehicle *ptr_bus = new Bus;
    // (*ptr_car).model = "Creata"; // yesa samjho directly go to accese like our *ptr value ke liye imagine karo
    // (*ptr_car).make = "Hyundai"; // derefernceing
    // cout<<ptr_car->toString()<<endl; // same work but different syntax
    // delete ptr_car; // vehicle ka constructor call hoga ptr ka type hi vo he bhai
    // delete ptr_bus;
    // // this is rook ek chehre aneck Called is runtime polymorphism
    // // Note 

    // Static
    Staic_wala obj1,obj2;
    obj1.val++;
    cout << obj1.val << " " << obj2.val << endl;
    return 0;
}