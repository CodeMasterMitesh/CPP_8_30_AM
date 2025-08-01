#include<iostream>
// input stream and output stream
// ✅ Summary Table
// Operator	Symbol	Use With	Purpose
// Insertion	<<	cout	Send data to output
// Extraction	>>	cin	Read data from input

// ✅ Summary:
// Feature	     cout	                          cin
// Type	    Object of class ostream	       Object of class istream
// Purpose	Output to console	           Input from keyboard
// Operator used << (insertion operator)	>> (extraction operator)
using namespace std;
int main()
{
    system("CLS");
    int x,y;
    // std::cout << "Welcome To C++ Lecture" << std::endl;
    cout << "Welcome To C++ Lecture" << endl; // cout.operator<<("Welcome To C++ Lecture");

    cout << "Enter Value for x and y : ";
    cin >> x >> y;

    cout << "x = " << x << " y =  " << y << "\nsum of x and y : " << x + y << endl;
    return 0;
}