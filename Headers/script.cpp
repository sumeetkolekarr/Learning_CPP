#include <iostream>
// There ae 2 types of headers: 1. System Header Files and 2. User Defined Header Files
using namespace std;
#include "this.h" // This will produce error if no file is present as it is User Defined Header File

int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++" << endl;
    cout << "Following are the types of operators in C++" << endl;
    // Arithmetic Operators
    // cout << "The value of a + b is " << a + b << endl;
    // cout << "The value of a - b is " << a - b << endl;
    // cout << "The value of a * b is " << a * b << endl;
    // cout << "The value of a / b is " << a / b << endl;
    // cout << "The value of a % b is " << a % b << endl;
    // cout << "The value of a++  is " << a++ << endl;
    // cout << "The value of a-- is " << a-- << endl;
    // cout << "The value of ++a is " << ++a << endl;
    // cout << "The value of --a is " << --a << endl;
    // Assignment Operator
    //  int d = 5, g = 8;
    //  char l = 'u';
    cout<<endl;
    // Comparison Operator
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    
    cout<<endl;
    // Logical Operator
    cout << "The value of the and logical operator is " << ((a == b) && (a<b)) << endl;
    cout << "The value of the or logical operator is " << ((a == b) || (a<b)) << endl;
    cout << "The value of the not logical operator is " << (!(a == b) && (a<b)) << endl;

    return 0;
}
