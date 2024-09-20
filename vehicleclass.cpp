#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle is starting" << endl;
    }
    
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car is starting with ignition key" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike is starting with kick" << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();
    
    v1->start();
    v2->start();

    delete v1;
    delete v2;
    
    return 0;
}
