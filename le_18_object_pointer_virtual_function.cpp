#include<iostream>
using namespace std;
class Book{
    char book_name[100];
    char author_name[100];
    float price;
    int pages;
    int disc;

    public :

    void setBookData()
    {
        fflush(stdin);
        cout << "Enter Book Name :";
        fgets(book_name,sizeof(book_name),stdin);
        cout << "Enter Author Name :";
        fgets(author_name,sizeof(author_name),stdin);
        cout << "Enter Book Pages :";
        cin >> pages;

        cout << "Enter Book Price :";
        cin >> price;
    }

    void showBookData()
    {
        cout << "Book Name is " << book_name <<endl;
        cout << "Book Author Name is " << author_name <<endl;
        cout << "Book No Of Pages " << pages <<endl;
        cout << "Book Price is  " << price <<endl;
    }
    // method overloading
    void discount(int price)
    {
        disc = price * 10 / 100;
        this->price = price - disc;

        cout << "Price is  : " << this->price << endl;
        cout << "Discount Amounts is  : " << disc << endl;
    }

    void discount(float price, float percent)
    {
        int disc = price * percent / 100;
        this->price = price - disc;

        cout << "Price is  : " << this->price << endl;
        cout << "Discount Amount is  : " << disc << endl;
    }

    // method overriding / method hiding
   virtual void bookInformation(string n)
    {
        cout << "This is Comman Book Information and name is " << n <<endl;
    }

};
class Magazine : public Book{

  public :
    void bookInformation(string name)
    {
        cout <<"This Magazine Name is " << name << " and this is all about Information\n";
        // cout <<"This Magazine Name is and this is all about Information\n";
    }

};

int main()
{
    system("CLS");
    // pointer in c++
    // Book b1;
    Book *p;  // static memory allocation
    // Magazine m;
    // p = &m;
    p = new Magazine; // DYNAMIC MEMORY ALLOCATION
    p->discount(500,15);
    p->bookInformation("Reddit"); // early binding // late binding
    // m.bookInformation("Reddit");

    return 0;
}