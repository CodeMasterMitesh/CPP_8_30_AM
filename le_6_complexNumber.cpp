#include<iostream>
using namespace std;
class ComplexNumber{
    int a,b; // this is class properties

    public :
    void setData(int x,int y)  // this is class methods
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "x = " << a << " y= " << b << endl;
    }

    ComplexNumber add(ComplexNumber e)
    {   
        ComplexNumber T;
        // cout << "This is c1 data :";
        // cout << " a = " << a << " b = " << b << endl;
        // cout << "This is c2 data :";
        // cout << " a = " << e.a << " b = " << e.b << endl;
        T.a = a + e.a;
        T.b = b + e.b;

        return T;
    }
    
};
// c3.a = c1.a + c2.a 
// c3.b = c1.b + c2.b 
int main()
{
    system("CLS");
    ComplexNumber c1,c2,c3; // this is object

    c1.setData(15,25);
    c1.showData();

    c2.setData(35,40);
    c2.showData();

    c3 = c1.add(c2);  // c1 is caller object and in add function argument take c2 and add method return as object and assign to c3 
    c3.showData();
    return 0;
}