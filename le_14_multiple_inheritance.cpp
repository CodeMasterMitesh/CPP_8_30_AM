#include<iostream>
#include<string.h>
using namespace std;

// multiple in heritance  -> Multiple inheritance is a feature in C++ where a class can inherit from more than one base class. This allows the derived class to acquire properties and behaviors from multiple parent classes.
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

class Employee{
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

class Manager : public Person, public Employee{
    float bonus;
    float ta;
    float mobile_allowance;
    float total_salary;

    public :
    void setManagerDetails(){
        cout << "Enter Your bonus Amount :";
        cin >> bonus;

        cout << "Enter Your ta Amount:"; 
        cin >> ta;

        cout << "Enter Your Mobile Allowance :";
        cin >> mobile_allowance;
    }

    void totalSalary()
    {
        
        total_salary = getSalary() + bonus + ta + mobile_allowance;

    }

    void showManagerDetails(){
        cout << "Your Bonus is  : " << bonus << endl;
        cout << "Your TA is  : " << ta << endl;
        cout << "Your Mobile Allowance is  : " << mobile_allowance << endl;
        cout << "Your Total Salary is  : " << total_salary << endl;
    }
};


int main()
{
    system("CLS");
    Manager m1;
    m1.setPersonDetails();
    m1.setEmployeeDetails();
    m1.setManagerDetails();

    m1.showPesronDetails();
    m1.showEmployeeDetails();
    m1.showManagerDetails();
   
    return 0;
}