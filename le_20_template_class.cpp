#include<iostream>
using namespace std;
// In C++, a class template is a blueprint or formula for creating a family of classes 
// that can operate on different data types without requiring separate code for each type. 
// It enables generic programming by allowing you to define a class with one or more template parameters that act as placeholders for actual data types.

template <class T>
class Temp{
    T a,b,c;

    public :
    void setData(T x, T y ,T z)
    {
        a = x;
        b = y;
        c = z;
    }

    void showData()
    {
        cout << "a = " << a << " b = " << b << " c =" << c <<endl;
    }
};

int main()
{
    system("CLS");
    Temp <int>t1;
    Temp <float>t2;
    Temp <string>t3;

    t1.setData(5,6,7);
    t1.showData();

    t2.setData(25.50,60.75,75.68);
    t2.showData();

    t3.setData("Text1","Text2","Text3");
    t3.showData();

    return 0;
}