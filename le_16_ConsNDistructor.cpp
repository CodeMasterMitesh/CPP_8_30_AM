#include<iostream>
using namespace std;
class Temp{
    int a,b;

    public :

    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void showData()
    {
        cout << "a =" << a << " b = " << b <<endl;
    }
    Temp(int a , int b)
    {   this->a = a;
        this->b = b;
        cout << "This is Temp Class Contructor\n";
    }

    ~Temp()
    {   
        cout << "This is Temp Class Destructor\n";
    }
};

class Jemp : public Temp{
    public:
    Jemp(int x, int y):Temp(x,y) // this is parameterized constructor
    {
        cout << "This is Jemp Class Contructor\n";
    }
     ~Jemp()
    {   
        cout << "This is Jemp Class Destructor\n";
    }
};
int main()
{
    system("cls");
    Jemp j(10,20);
    // j.setData(5,6);
    j.showData();

    return 0;
}