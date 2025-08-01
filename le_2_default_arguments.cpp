#include<iostream>
using namespace std; 
// set default arguments
int sum(int x = 0, int y = 0,int z = 0)
{
    cout << "Addition\n";
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    cout << x + y + z << endl;
}

int mul(int x = 1, int y = 1,int z = 1)
{
    cout << "Multification\n";
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    cout << x * y * z << endl;
}

int main()
{
    system("CLS");

    sum(25,26,27);
    sum(10,20);
    sum(30);
    sum();

    mul(5,4,3);
    mul(5,4);
    mul(5);
    mul();
    return 0;
}