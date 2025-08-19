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
int main()
{
    system("CLS");
    
   Animal Tiger;

   Tiger.setData("Rocky","Roar Roar");
   Tiger.showData();
    return 0;
}