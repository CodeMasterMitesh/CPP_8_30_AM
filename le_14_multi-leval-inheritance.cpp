#include<iostream>
#include<string.h>
using namespace std;

// 3.multi-leval inheritance -> Multilevel inheritance is a type of inheritance where a derived class inherits from a base class, and another class further inherits from that derived class. It forms a chain of inheritance where
// ex.Class A (Base Class) → Class B (Derived from A) → Class C (Derived from B)
class Person{
    char fullname[100];
    char address[100];
    char gender[10];
    int age;

    public :
    void setPersonDetails(){
        cout << "Enter Your Name :";
        fgets(fullname,sizeof(fullname),stdin);

        cout << "Enter Your Address :";
        fgets(address,sizeof(address),stdin);

        cout << "Enter Your Gender :";
        fgets(gender,sizeof(gender),stdin);

        cout << "Enter Your Age :";
        cin >> age;
    }

    void showPesronDetails()
    {

        cout << "Your Name is  : " << fullname << endl;
        cout << "Your Address is  : " << address << endl;
        cout << "Your Gender is  : " << gender << endl;
        cout << "Your Age is  : " << age << endl;
    }

};

class Employee : public Person{
    int empid;
    char designation[100];
    float salary;

    public :

    void setEmployeeDetails(){
        cout << "Enter Your Emp Id :";
        cin >> empid;
        fflush(stdin);
        cout << "Enter Your Designation :";
        fgets(designation,sizeof(designation),stdin); 

        cout << "Enter Your Salary :";
        cin >> salary;
    }

    void showEmployeeDetails()
    {

        cout << "Your Empid is  : " << empid << endl;
        cout << "Your Designation is  : " << designation << endl;
        cout << "Your Salary is  : " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }

};

class Intern : public Employee{
    float stipend;
    
    public :
    void setInternDetails(){
        cout << "Enter Your stipend Amount :";
        cin >> stipend;
    }

    void showInternDetails(){
        cout << "Your Stipend Amount Is  : " << stipend << endl;
       
    }
};

int main()
{
    system("CLS");
    Intern i;
    i.setPersonDetails();
    i.setEmployeeDetails();
    i.setInternDetails();


    i.showPesronDetails();
    i.showEmployeeDetails();
    i.showInternDetails();
   
    return 0;
}