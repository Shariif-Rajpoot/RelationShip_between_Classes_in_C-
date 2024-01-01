#include <iostream>
using namespace std;
class Engine
{
    string power;

public:
    Engine(string p)
    {
        power = p;
        cout << "Engine created" << endl;
    }
    ~Engine()
    {
        cout << "Engine destroyed" << endl;
    }
};
class Car
{
    Engine *e;

public:
    Car()
    {
        e = new Engine("34Ths");
        cout << "Car creted" << endl;
    }
    ~Car()
    {
        delete e;
        cout << "Car destoryed" << endl;
    }
};
int main()
{
    Car c;
    return 0;
}