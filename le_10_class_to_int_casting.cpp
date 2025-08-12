#include<iostream>
using namespace std;
// class to int or class to float 
// These special functions let you convert an object of your class into a built-in type like int or float without explicitly calling a method — they are invoked automatically when the compiler sees your object being used where an int or float is expected.
class Dummy{
    int a; // property
    float z;
    public:
    void setData(int x) // this is dummy class method
    {
        a = x;
    }
    void setData1(float x1) // this is dummy class method
    {
        z = x1;
    }
    void showData1()
    {
        cout << "z = " << z << endl;
    }
    void showData()
    {
        cout << "a = " << a << endl;
    }

    operator int()
    {
        return a;
    }

    
    operator float()
    {
        return z;
    }


};
int main()
{
   Dummy d1;
   Dummy d2;
   int x;
   float y;
   d1.setData(25);
   d1.showData();
   
   x = d1; // 
   cout << x << endl;

   d2.setData1(25.50);
   d2.showData1();

   y = d2;
   cout << y << endl;
    return 0;
}