#include<iostream>
using namespace std; 
// ref variable
int main()
{
    system("CLS");
    
    int x = 10; // value type variable
    //int *p = &x; // pointer varaiable // address type variable
    int *p;
    p = &x;
    int y = 15;

    // this is ref variable
    int &z = y; // ref varaible initialize

    cout << "x = " << x << endl;
    cout << "p = " << *p << endl;
    cout << "p = " << (*p)++ << endl;
    cout << "p = " << *p << endl;
    cout << "x = " << x << endl;
    
    // this is ref variable example
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "z = " << z++ << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    cout << "y = " << y++ << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
   
    return 0;
}