#include <iostream>
using namespace std;
class Engine
{
    string power;

public:
    friend class Car;
    Engine();
    Engine(string);
    ~Engine();
};
Engine::Engine() {}
Engine::Engine(string p) : power(p)
{
    cout << "Engine is created" << endl;
}
Engine::~Engine()
{
    cout << "Alas! Engine is destroyed" << endl;
}
class Car
{
    string name;
    string model;
    Engine *e;

public:
    friend class Person;
    Car();
    Car(string n, string m, string);
    void getInfo()
    {
        cout << "Name => " << name << endl;
        cout << "Model => " << model << endl;
        cout << "Engine => " << e->power << endl;
    }
    ~Car();
};
Car::Car() {}
Car::Car(string n, string m, string power) : name(n), model(m)
{
    e = new Engine(power);
    cout << endl;
    cout << "\t\tFinally Car is created " << endl;
}
Car::~Car()
{
    delete e;
    cout << "Alas! Car is destroyed" << endl;
}
int main()
{
    Car c("Lamborgini", "2321FSFA", "400km/h");
    c.getInfo();
    return 0;
}