#include <iostream>
#include <string.h>
using namespace std;
class Car
{
    string name;
    string model;

public:
    friend class Person;
    Car();
    Car(string n, string m);
    void getInfo()
    {
        cout << "Name => " << name << endl;
        cout << "Model => " << model << endl;
    }
    ~Car();
};
Car::Car() {}
Car::Car(string n, string m) : name(n), model(m)
{
    cout << endl;
    cout << "\t\tFinally Car is created " << endl;
}
Car::~Car()
{
    cout << "Alas! Car is destroyed" << endl;
}
class Person
{
    string name;
    Car *c;

public:
    Person(){};
    Person(string n)
    {
        name = n;
    }
    void OwnsCar(Car *ptr)
    {
        c = ptr;
        cout << name << " is owning the car " << c->name << " with model " << c->model << endl;
    }
    ~Person();
};
Person::~Person()
{
    cout << "Alas! Person is killed" << endl;
}
int main()
{
    Car c("Lamborgini", "231SmFs");
    Person *Mohsin = new Person("M.Mohsin");
    Mohsin->OwnsCar(&c);
    delete Mohsin;
    Mohsin = nullptr;
    c.getInfo();
    return 0;
}