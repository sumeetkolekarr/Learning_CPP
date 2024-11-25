#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? --> data types which holds the address of other data types
    int a = 3;
    int *b;
    b = &a;
    // & --> Address of Operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<&b<<endl;

    // * --> (value at)  Dereferencing Opeator
    cout<<"The value of b is "<<*b<<endl;

    //Pinter to Pointer
    int**c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address c value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}