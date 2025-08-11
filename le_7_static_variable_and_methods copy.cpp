#include<iostream>
using namespace std;
// static function and static varaiable
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

    void showDimention()
    {
        cout << "l = " << l << " b = " << b << " h = " << h << endl;
    }

    static void setPrice(float p){ // static methods
        price = p;
    }   

    static void showPrice(){
         cout << "Price = " << price << endl;
    }   
};
float Box::price; // value assigment
int main()
{
    system("CLS");

    // Box b1,b2,b3,b4;
    // b1.setDimention(25,50,75);
    // b1.showDimention();

    // cout << "Enter Price :";
    // cin >> Box::price;

    // cout << Box::price << endl;

    Box::setPrice(100);
    Box::showPrice();

    return 0;
}