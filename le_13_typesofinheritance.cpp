// In C++, inheritance is a mechanism where a new class (derived class) inherits properties and methods from an existing class (base class), 
// enabling code reuse and establishing a hierarchical relationship between classes. 

// 1.single leval inheritance -> one parent one child
// 2.multiple in heritance  -> Multiple inheritance is a feature in C++ where a class can inherit from more than one base class. This allows the derived class to acquire properties and behaviors from multiple parent classes.
// 3.multi-leval inheritance -> Multilevel inheritance is a type of inheritance where a derived class inherits from a base class, and another class further inherits from that derived class. It forms a chain of inheritance where
// ex.Class A (Base Class) → Class B (Derived from A) → Class C (Derived from B)

// 4.Hierarchical Inheritance->Hierarchical inheritance occurs when multiple derived classes inherit from a single base class. This means one parent class has multiple child classes that inherit its properties and methods.
// 5.Hybrid inheritance is a combination of two or more types of inheritance. It usually involves a combination of:

#include<iostream>
using namespace std;
class Car{  // this is parent class / base class

    public :

    void brk()
    {
        cout << "Break Applied\n";
    }

    void gear()
    {
        cout << "Gear Change Manually\n";
    }

    void musicSystem()
    {

        cout << "Music Start Vande Matram...\n";
    }

};

class SportsCar : public Car{ // this is child class / derived class


};
int main()
{
    SportsCar s1;
    s1.brk();
    s1.gear();
    s1.musicSystem();

    return 0;
}