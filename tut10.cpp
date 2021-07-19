#include<iostream>

using namespace std;

int main(){

    // 1. USE OF BREAK FUNCTION IN C++
    // HERE AFTER REACHING AND PRINTING 2 IN THE LOOP WILL EXIT AND END THE PROGRAM

    for (int i = 0; i <=10;  i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
            break;
        }
        
    }

    // 2. USE OF CONTINUE FUNCTION IN C++
    // HERE ALL THE NUMBERS IN THE LOOP WILL PRINT EXCEPT 2

    for (int i = 0; i <=10;  i++)
    {
        if (i==2)
        {
            continue;
        }
        cout<<i<<endl;
        
    }
    return 0;
}