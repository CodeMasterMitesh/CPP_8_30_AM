#include<iostream>
#include<string.h>
using namespace std;

// In C++, a class is a user-defined data type that serves as a blueprint or template for creating objects. It encapsulates data (data members) and functions (member functions) that operate on that data into a single unit.
// Key characteristics of a C++ class include:
// Encapsulation:
// It bundles data and the methods that operate on that data within a single unit, controlling access to the data through access specifiers (e.g., public, private, protected).
// Blueprint for Objects:
// A class defines the structure and behavior of objects that will be created from it. Objects are instances of a class.
// Data Members (Attributes):
// These are variables declared within the class that represent the properties or state of an object.
// Member Functions (Methods):
// These are functions defined within the class that operate on the data members and define the behavior of an object.
// No Memory Allocation (for the class itself):
// A class definition does not allocate memory; memory is allocated only when an object (an instance of the class) is created.

class Book{  // this is our class

    string book_name;  // properties 
    string author_name;  // properties
    int pages;
    float price;

    public :

    void setData()  // methods
    {
        cout << "Enter Book Name : ";
        cin >> book_name;
        fflush(stdin);
        cout << "Enter Author Name : ";
        cin >> author_name;

        cout << "Enter Pages Name : ";
        cin >> pages;

        cout << "Enter Price Name : ";
        cin >> price;
        if(price < 0){
           price = price - price;
        }
    }
    void getData();  // this is also member function
};
// => :: this is scop resolution // :: membership tag
void Book::getData()
{
    cout << "*****************Book Data*****************"<< endl;
    cout << "Book Name is : " << book_name <<endl;
    cout << "Book Author Name is : " << author_name <<endl;
    cout << "Book Page is : " << pages <<endl;
    cout << "Book Price is : " << price <<endl;
    cout << "*******************************************"<< endl;   
}

int main()
{
    system("CLS");
    Book b1,b2,b3;  // b1,b2,b3 is our object

    b1.setData();

    b2.setData(); // b2 call setData function
    b3.setData(); // b3 call setData function

    b1.getData();
    b2.getData();
    b3.getData();
    
    return 0;
}

