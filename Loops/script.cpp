#include <iostream>
using namespace std;
int main()
{
    // Loops in CPP
    // 1. FOR Loop
    // 2. While Loop
    // 3. Do-WHILE Loop

    // For Loops in CPP
    // for (initialization;condition; updation)
    // {
    //     Code Body
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i+1<<endl;
    // }

    // Example of infinnite For loop
    //  for (int i = 0; true; i++)
    //  {
    //      cout<<i+1<<endl;
    //  }

    // While Loop in C++
    // Syntax
    // while (/* condition */)
    // {
    //     /* code */
    // }

    // int i = 1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinnite While loop
    //  int i = 1;
    //  while (true)
    //  {
    //      cout<<i<<endl;
    //      i++;
    //  }

    // Do While Loop in C++
    // Syntax
    // do
    // {
    //     /* code */
    // } while (/* condition */)

    // int i = 1;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 40);

    // Quick Quiz 
    for (int i = 1; i < 11; i++)
    {
        cout<<"6 x ";
        cout<<i;
        cout<<" = ";
        cout<<6*i<<endl;
    }
    

    return 0;
}