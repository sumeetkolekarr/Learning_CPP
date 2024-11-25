#include <iostream>
using namespace std;

int main()
{
    int marks[] = {23, 45, 26, 89};
    int mathMarks[4];
    mathMarks[0] = 45;
    mathMarks[1] = 54;
    mathMarks[2] = 99;
    mathMarks[3] = 28;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl;
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl<<endl;

    marks[2] = 54;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // Looping in arrays
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }

    // Quick Quiz
    // int i = 0;
    // while (i < 4)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // }

    // Pointers and arrays

    // Dereferencing in Arrays
    // &marks does not work in arrays

    // Pointer Arithmetic
    // address(new) = address(current) + i * sizeof(data type)
    int* p = marks; 
    // cout<<*(p++);
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}