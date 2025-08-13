#include<iostream>
using namespace std; 
class LunchBox; // forward declaration
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

    friend void f1(Box,LunchBox);
};

class LunchBox{

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

    friend void f1(Box,LunchBox);
};

void f1(Box e,LunchBox t){
    cout << "This is F1 Function Data\n";
    cout << "l = " << e.l << " b = " << e.b << " h = " << e.h << endl;
    cout << "l = " << t.l << " b = " << t.b << " h = " << t.h << endl;
    cout << "This is F1 Function END\n";
}

int main()
{
    system("CLS");
    Box b1;
    LunchBox t1;

    b1.setDimention(25,50,75);
    b1.showDimention();

    t1.setDimention(100,200,300);
    t1.showDimention();

    f1(b1,t1);
    return 0;
}