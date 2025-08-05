#include<iostream>
#include<string.h>
using namespace std;
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

