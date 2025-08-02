#include<iostream>
using namespace std; 
// function call by ref variable
int sum(int x,int y){
    return x + y;
}

int sub(int *x,int *y){
    return *x - *y;
}

int mult(int &x,int &y){
    return x * y;
}
int main()
{
    system("CLS");
    int n = 15,n1 = 25;
    cout << sum(n,n1) << endl; // function call by value

    cout << sub(&n,&n1) << endl; // function call by address

    cout << mult(n,n1) << endl; // function call by refrence
    return 0;
}