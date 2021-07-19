#include<iostream>

using namespace std;

int main(){

    // WHAT IS POINTER -----> IT IS A TYPE OF DATA TYPE WHICH HOLDS THE ADDRESS OF OTHER DATA TYPES....

    int a=3;
    int* b=&a;
    
    // & -----> (Address of) operator
    cout<<"The address of b is "<<b<<endl;
    cout<<"The address of b is "<<&a<<endl;

    // * -----> (Value of) Dereference Operator
    cout<<"The address of b is "<<*b<<endl;

    // POINTER TO POINTER
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}