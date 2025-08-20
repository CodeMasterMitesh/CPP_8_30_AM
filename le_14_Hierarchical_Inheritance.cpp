#include<iostream>
#include<string.h>
using namespace std;

// 4.Hierarchical Inheritance->Hierarchical inheritance occurs when multiple derived classes inherit from a single base class. This means one parent class has multiple child classes that inherit its properties and methods.
class Animal{
 char name[100];
 char sound[100];

 public :
 void setData(char name[],char sound[])
 {
        strcpy(this->name,name);
        strcpy(this->sound,sound);
 }

 void showData()
 {
    cout << "Animal Name is " << name << " Voice is  " << sound << endl;
 }

};

class Tiger : public Animal{

};

class Lion : public Animal{

};

class Cat : public Animal{

};

class Dog : public Animal{

};
int main()
{
    system("CLS");
    
   Tiger t;
   Lion l1;
   Cat c1;
   Dog d;

   t.setData("Rocky","Roar Roar");
   t.showData();

   l1.setData("Jago","Roar Roar");
   l1.showData();

   c1.setData("Pinky","Meow Meow");
   c1.showData();

   d.setData("Dogesh bhai","Bhow Bhow");
   d.showData();
    return 0;
}