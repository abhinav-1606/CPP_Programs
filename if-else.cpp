#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int age;
    cout << "Show me Your Driving Licence" << endl;
    cout << "Tell me your Age : ";
    cin >> age;

    // // Selection Control Structure: If-Else
    if ((age < 18) && (age > 0))
    {
        cout << "You cant get your Driving Licence";
    }
    else if (age == 18)
    {
        cout << "Apply Now and Give the Driving Test";
    }
    else if (age < 1)
    {
        cout << "Your are not yet born";
    }
    else
    {
        cout << "Show me you Driving Licence";
    }

    // // Selection Control Structure: Switch Case
    // switch (age)
    // {
    // case 18:
    //     cout<<"YOU ARE 18";
    //     break;
    // case 20:
    //     cout<<"YOU ARE 20";
    //     break;
    // case 22:
    //     cout<<"YOU ARE 22";
    //     break;

    // default:
    //     break;
    // }

    return 0;
}