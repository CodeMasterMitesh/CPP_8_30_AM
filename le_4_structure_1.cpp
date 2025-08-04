#include<iostream>
#include<string.h>
using namespace std;
// 1) premetive datatype -> int , float , void , char , double 
// 2) Non-Premative structure
// structure is user define datatype and collection of premative datatypes.
struct Book{

    // char book_name[100];
    // char author_name[100];
    string book_name;
    string author_name;
    int pages;
    float price;

};

Book setData()
{
    Book e;
    cout << "Enter Book Name : ";
    cin >> e.book_name;
    fflush(stdin);
    cout << "Enter Author Name : ";
    cin >> e.author_name;

    cout << "Enter Pages Name : ";
    cin >> e.pages;

    cout << "Enter Price Name : ";
    cin >> e.price;

    return e;
}

void getData(Book b)
{
    cout << "*****************Book Data*****************"<< endl;
    cout << "Book Name is : " << b.book_name <<endl;
    cout << "Book Author Name is : " << b.author_name <<endl;
    cout << "Book Page is : " << b.pages <<endl;
    cout << "Book Price is : " << b.price <<endl;
    cout << "*******************************************"<< endl;   
}
int main()
{
    system("CLS");
    Book b1,b2,b3;

    // strcpy(b1.book_name,"Ramayan");
    // strcpy(b1.author_name,"Ved Vyas");
    b1.book_name = "Ramayan";
    b1.author_name = "Ved Vyas";
    b1.pages = 867;
    b1.price = 950.50;
    
    b2 = setData();
    b3 = setData();
    getData(b1);
    getData(b2);
    getData(b3);
    
    return 0;
}

