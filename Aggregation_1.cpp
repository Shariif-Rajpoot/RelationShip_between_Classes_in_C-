#include <iostream>
using namespace std;
class car
{
    friend class person;
    string name;
    string model;

public:
    car(string n, string m)
    {
        name = n;
        model = m;
        cout << "Car created" << endl;
    }
    void display()
    {
        cout << "Name => " << name << endl;
        cout << "Model => " << model << endl;
    }
    ~car()
    {
        cout << "Car destroyed" << endl;
    }
};
class person
{
    car *p;
    string name;

public:
    person(string name, car *p)
    {
        this->p = p;
        this->name = name;
        cout << name << " owns the car " << this->p->name << " and with model " << this->p->model << endl;
    }
    ~person()
    {
        cout << "Person got killed" << endl;
    }
    void display()
    {
        cout << "Name => " << name << endl;
    }
};
int main()
{
    // car *c = new car("BMW", "234jsdf");
    car c1("BMW", "2343fd");
    person p("Mohsin", &c1);
    c1.display();
    // delete p;
    p.display();
    return 0;
}