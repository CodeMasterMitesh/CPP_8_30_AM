#include<iostream>
using namespace std;
// abstract class 
// pure virtual function
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
    // void discount(int price)
    // {
    //     disc = price * 10 / 100;
    //     this->price = price - disc;

    //     cout << "Price is  : " << this->price << endl;
    //     cout << "Discount Amounts is  : " << disc << endl;
    // }

    virtual void discount(float,float) = 0;

    // pure virtual function 
   virtual void bookInformation(string) = 0;  // declare this method in parent class

};
class Magazine : public Book{
    float price;
    float percent;
  public :
    void bookInformation(string name)
    {
        cout <<"This Magazine Name is " << name << " and this is all about Information\n";
    }

    void discount(float price, float percent)
    {
        int disc = price * percent / 100;
        this->price = price - disc;

        cout << "Price is  : " << this->price << endl;
        cout << "Discount Amount is  : " << disc << endl;
    }

};

int main()
{
    system("CLS");
    // Book b;
    Book *p;  // static memory allocation
    p = new Magazine; // DYNAMIC MEMORY ALLOCATION
    p->discount(500,15);
    p->bookInformation("Reddit");

    return 0;
}