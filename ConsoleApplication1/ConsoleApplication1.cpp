#include <iostream>
#include <string>
using namespace std;

class Company {
    string name;
public:
    Company() : name("Unknown Company") {}
    Company(string n) : name(n) {}
    string getName() { return name; }
};

class Employee {
    string name;
    int age;
    bool isMarried;
    int numOfChildren;

public:
    Employee() : name("Unknown Employee"), age(0), isMarried(false), numOfChildren(0) {}
    Employee(string n, int a, bool married, int children) : name(n), age(a), isMarried(married), numOfChildren(children) {}
    string getName() { return name; }
    int getAge() { return age; }
    bool getStatus() { return isMarried; }
    int getChildren() { return numOfChildren; }
};

class Vehicle {
    string type;
public:
    Vehicle() : type("Unknown Vehicle") {}
    Vehicle(string t) : type(t) {}
    string getType() { return type; }
};

class Truck : public Vehicle {
    int loadCapacity;
    string fuelType;
    string model;
public:
    Truck() : loadCapacity(0), fuelType("Unknown"), model("Unknown") {}
    Truck(int capacity, string fuel, string m) : loadCapacity(capacity), fuelType(fuel), model(m) {}
    Truck(string t, int capacity, string fuel, string m) : Vehicle(t), loadCapacity(capacity), fuelType(fuel), model(m) {}
};

class Car : public Vehicle {
    int passengerCapacity;
    string carType;
    string model;
public:
    Car() : passengerCapacity(0), carType("Unknown"), model("Unknown") {}
    Car(int capacity, string type, string m) : passengerCapacity(capacity), carType(type), model(m) {}
    Car(string t, int capacity, string type, string m) : Vehicle(t), passengerCapacity(capacity), carType(type), model(m) {}
};

int main() {
    Company c("Example Company");
    cout << "Company Name: " << c.getName() << endl;

    Employee e("John Doe", 30, true, 2);
    cout << "Employee Name: " << e.getName() << ", Age: " << e.getAge() << ", Status: " << (e.getStatus() ? "Married" : "Single") << ", Number of Children: " << e.getChildren() << endl;

    Vehicle v("Car");
    cout << "Vehicle Type: " << v.getType() << endl;

    Truck t1;
    cout << "Truck Model: " << t1.getType() << ", Load Capacity: " << t1.loadCapacity << ", Fuel Type: " << t1.fuelType << ", Model: " << t1.model << endl;

    Truck t2(5000, "Diesel", "ABC123");
    cout << "Truck Model: " << t2.getType() << ", Load Capacity: " << t2.loadCapacity << ", Fuel Type: " << t2.fuelType << ", Model: " << t2.model << endl;

    Truck t3("Truck", 8000, "Diesel", "DEF456");
    cout << "Truck Model: " << t3.getType() << ", Load Capacity: " << t3.loadCapacity << ", Fuel Type: " << t3.fuelType << ", Model: " << t3.model << endl;

    Car car1;
    cout << "Car Model: " << car1.getType() << ", Passenger Capacity: " << car1.passengerCapacity << ", Car Type: " << car1.carType << ", Model: " << car1.model << endl;

    Car car2(4, "Sedan", "GHI789");
    cout << "Car Model: " << car2.getType() << ", Passenger Capacity: " << car2.passengerCapacity << ", Car Type: " << car2.carType << ", Model: " << car2.model << endl;

    Car car3("Car", 5, "SUV", "JKL012");
    cout << "Car Model: " << car3.getType() << ", Passenger Capacity: " << car3.passengerCapacity << ", Car Type: " << car3.carType << ", Model: " << car3.model << endl;

    return 0;
}