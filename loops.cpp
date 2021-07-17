#include <iostream>

using namespace std;

int main()
{
    // LOOPS in C++
    // There are three types of loops in C++
    // 1.FOR LOOP
    // 2.WHILE LOOP
    // 3.DO WHILE LOOP

    // 1.FOR LOOP IN C++

    //  for (intialization; condition; updation;)
    //  {
    //      LOOP BODY("CODE IN C++");
    //  }

    for (int i = 0; i <= 50; i++)
    {
        cout << i << endl;
    }

    // 2.WHILE LOOP IN C++

    // while(condition){
    //     "C++ STATEMENTS";
    // }

    int i = 1;
    while (i <= 50)
    {
        cout << i << endl;
        i++;
    }

    // 3.DO WHILE LOOP IN C++
    // THE OPERATION OR USE OF DO WHILE LOOP IS EVEN IF THE CONDITION IS FALSE STILL THE LOOP RUNS FOR '1-TIME'

    // do
    // {
    //     C++ STATEMENTS / CODE
    // } while (condition);

    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 50);

    return 0;
}
