#include<iostream>
using namespace std;
// three type of casting in  c++?
// int to class 
// class to int 
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

    Dummy(){}

    // Dummy(int n)
    // {
    //     a = n;
    // }
    void operator=(int n)
    {
        a = n;
    }
};
int main()
{
   Dummy d1;
   int x = 35;
   d1 = x; // d1 object call to constructor

  //d1.setData(25);
   d1.showData();
    
    return 0;
}