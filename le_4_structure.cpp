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
    getData(b1);
    // cout << "Enter Book Name : ";
    // //fgets(b2.book_name,sizeof(b2.book_name),stdin);
    // cin >> b2.book_name;

    // cout << "Enter Author Name : ";
    // //fgets(b2.author_name,sizeof(b2.author_name),stdin);
    // cin >> b2.author_name;
    // cout << "Enter Pages Name : ";
    // cin >> b2.pages;

    // cout << "Enter Price Name : ";
    // cin >> b2.price;
    b2 = setData();
    getData(b2);
    b3 = setData();
    getData(b3);


    // cout << "*****************Book Data 1*****************"<< endl;
    // cout << "Book Name is : " << b1.book_name <<endl;
    // cout << "Book Author Name is : " << b1.author_name <<endl;
    // cout << "Book Page is : " << b1.pages <<endl;
    // cout << "Book Price is : " << b1.price <<endl;
    // cout << "*******************************************"<< endl;

    // cout << "*****************Book Data 2*****************"<< endl;
    // cout << "Book Name is : " << b2.book_name <<endl;
    // cout << "Book Author Name is : " << b2.author_name <<endl;
    // cout << "Book Page is : " << b2.pages <<endl;
    // cout << "Book Price is : " << b2.price <<endl;
    // cout << "*******************************************"<< endl;

    // cout << "*****************Book Data 3*****************"<< endl;
    // cout << "Book Name is : " << b3.book_name <<endl;
    // cout << "Book Author Name is : " << b3.author_name <<endl;
    // cout << "Book Page is : " << b3.pages <<endl;
    // cout << "Book Price is : " << b3.price <<endl;
    // cout << "*******************************************"<< endl;

    return 0;
}

