#include<iostream>
using namespace std; 
// inline function

inline void msg()
{
  cout << "Welcome Students To Our Institute.\n";  
}

inline int sum(int x, int y)
{
    return x + y;
}

int main()
{
    system("CLS");
    
    msg();
    cout << sum(5,15) << endl;
    return 0;
}