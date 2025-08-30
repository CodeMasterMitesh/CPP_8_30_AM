#include<iostream>
using namespace std;
int main()
{
    system("CLS");
    
    int n,fact = 1;
    string error;
    int err;
    try{
        cout << "Enter Any Number For Factorial : ";
        cin >> n;

        if(n < 1 || n > 15){
           err = 500;
           error = "Kindly Enter Value Above 0 and Below 15 for accurance Ans";
           throw err;
        }

    
        while (n > 0)
        {
        fact = fact * n;
        n--;
        }

        cout << "Factorial of n no is " << fact << endl;
    }
    catch(string err)
    {
        cout << err << endl;
    }catch(int err)
    {
        if(err == 404)
        {
            cout << "File Not Found" << endl;
        }else if(err == 500){
            cout << "Server Error" << endl;
        }
    }
    // catch(...)
    // {
    //     cout << "Some Error" << endl;
    // }

    
     
//  1 * 5  = 5
//  5 * 4  = 20
//  20 * 3  = 60
//  60 * 2  = 120
//  120 * 1  = 120
    return 0;
}