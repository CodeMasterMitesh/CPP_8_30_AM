#include<iostream>
using namespace std;
// In C++, a destructor is a special member function, denoted by a tilde (~) followed by the class name, 
// that is automatically called when an object of that class is destroyed, 
// ensuring proper cleanup and resource release.
class Box{

    int l,b,h; // this is property
    static float price; // this is static variable
    public :
    
    void setDimention(int x,int y,int z) // this is method
    {
        l = x;
        b = y;
        h = z;
    }

     void getDimention(int x = 0,int y = 0,int z = 0) // this is method
    {
        l = x;
        b = y;
        h = z;
    }

    void showDimention()
    {
        cout << "l = " << l << " b = " << b << " h = " << h << endl;
    }
    // this is default constructor

    Box(){
        cout << "This is Box Class default constructor." << endl;
    } 
    // this is parameterized constructor 
    Box(int x, int y = 0, int z = 0){
        cout << "This is Box Class constructor." << endl;
        l = x;
        b = y;
        h = z;
    }

    // Copy constructor
    Box(Box &t){
        cout << "This is Box Class Copy constructor." << endl;
        l = t.l;
        b = t.b;
        h = t.h;
    }

    // this is destructor 
    ~Box()
    {
        cout << "This is Box Class destructor." << endl;
    }

};


int main()
{
    system("CLS");

    Box b1(15,20,25),b2(50,75),b3(95),b4(b3),b5;
    b1.showDimention();
    b2.showDimention();
    b3.showDimention();
    b4.showDimention();
    
    b5.getDimention();
    b5.showDimention();
    
    return 0;
}