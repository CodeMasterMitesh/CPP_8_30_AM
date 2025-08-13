#include<iostream>
using namespace std;
// A friend function in C++ is a non-member function that is granted 
// special permission to access the private and protected members of a class. 
// While it is declared within the class definition using the friend keyword, 
// it is not considered a member of that class and does not have a this pointer. 
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
    
   friend void f1(int , int ,int);

};

void f1(int x,int y,int z){
    Box t;
    t.setDimention(x,y,z);
    t.showDimention();
    // t.l = x;
    // t.b = y;
    // t.h = z;
    // cout << "l = " << t.l << " b = " << t.b << " h = " << t.h << endl;
}

int main()
{
    system("CLS");
    // Box b1;
    
    f1(50,75,95);
    return 0;
}