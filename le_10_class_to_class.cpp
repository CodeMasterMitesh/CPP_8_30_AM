#include<iostream>
using namespace std;
// class to class 
class Dummy{
    int a; // property
    public:
    void setData(int x) // this is dummy class method
    {
        a = x;
    }
   
    void showData()
    {
        cout << "a = " << a << endl;
    }

    int getData()
    {
        return a;
    }
};

class Yummy{
    int b; // property
    public:
    void setData(int x) // this is dummy class method
    {
        b = x;
    }
   
    void showData()
    {
        cout << "b = " << b << endl;
    }
    
    Yummy(){}
    // constructor
    // Yummy(Dummy d)
    // {
    //     b = d.getData();
    // }

    // operator overloading
    void operator=(Dummy d){
        b = d.getData();
    }
};
int main()
{
   Dummy d1;
   Yummy y1;
   
   d1.setData(25);
   d1.showData();

   y1 = d1; // y1 is caller object and = symbol is function and argument we pass d1 and assign value to b property of y1 object

   y1.showData();

    return 0;
}