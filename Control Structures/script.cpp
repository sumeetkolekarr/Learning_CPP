#include <iostream>
using namespace std;
int main()
{
    // Structures in CPP
    // 1. Sequence Structure 2. Selection Structure 3. Loop Structure

    // If Else-If Else Statements // Selection Control Structure
    int age;
    cout << "Tell me Your Age: " << endl;
    cin >> age;
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "You can't come to my party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are a kid and you will get a kid pass to the party" << endl;
    // }
    // else if (age < 1)
    // {
    //     cout << "You are not born yet" << endl;
    // }
    // else
    // {
    //     cout << "You can come to the party" << endl;
    // }

    // Switch Case Statements // Selection Control Structure
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    case 22:
        cout << "You are 22" << endl;
        break;

    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No Special Cases" << endl;
        break;
    }


    cout<<"You are done with Switch Case"<<endl;
    return 0;
}