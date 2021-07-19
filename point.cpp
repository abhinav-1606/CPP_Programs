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

    return 0;
}