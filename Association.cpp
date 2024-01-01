#include <iostream>
using namespace std;
class Doctor;
class Patient
{
    string name;
    int age;
    friend class Doctor;

public:
    Patient();
    Patient(string name, int age);
};
Patient::Patient() {}
Patient::Patient(string name, int age) : name(name), age(age)
{
    cout << "Patient is created " << endl;
}
class Doctor
{
    string name;
    int age;

public:
    Doctor();
    Doctor(string name, int age);
    void patientDealing(Patient &person) const
    {
        cout << name << " Doctor is dealing with the patient " << person.name << " having age " << person.age << endl;
    }
};
Doctor::Doctor() {}
Doctor::Doctor(string name, int age) : name(name), age(age)
{
    cout << "Doctor is created " << endl;
}
int main()
{
    Patient Mohsin("M.Mohsin", 21), Ali("Ali Ahmed", 24);
    Doctor Qadir;
    Qadir = Doctor("Dr. Qadir Shah", 36);
    Qadir.patientDealing(Mohsin);
    Qadir.patientDealing(Ali);
    return 0;
}