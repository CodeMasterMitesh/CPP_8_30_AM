#include<iostream>
using namespace std;
class Box{

    int l,b,h; // this is property
    public :
    
    void setDimention(int x,int y,int z) // this is method
    {
        l = x;
        b = y;
        h = z;
    }

    void showDimention()
    {
        cout << "l = " << l << " b = " << b << " h = " << h << endl;
    }

    friend istream& operator>>(istream & , Box &);
    friend ostream& operator<<(ostream & , Box &);
};

istream& operator>>(istream &in, Box &e)
{
    cout << "Enter Value : ";
    in >> e.l >> e.b >> e.h;
}

ostream& operator<<(ostream &out, Box &e)
{
   out << "l = " << e.l << " b = " << e.b << " h = " << e.h << endl;
}

int main()
{
    system("CLS");
    Box b1,b2;
    int x , y;
    cin >> b1 >> b2;
    cout << b1 << b2;

    // b1.showDimention();
    // b2.showDimention();
   
    return 0;
}