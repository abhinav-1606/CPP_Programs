// There are two types of  Header Files
// 1. System defined header files
#include<iostream>
// 2. User defined Header files
// #include<this.h> // This will produce an error if 'this.h' is not present in the current directory!

using namespace std;

int main(){
    int a,b;
    cout<<"ENTER THE VALUE FOR 'a' = ";
    cin>>a;
    cout<<"ENTER THE VALUE FOR 'b' = ";
    cin>>b;
    cout<<endl;
    cout<<"Operators in C++"<<endl;
    cout<<endl;

    // Arithemtic Operators
    cout<<"These are the Arithmetic Operators in C++"<<endl;
    cout<<"The Value of a + b = "<<a+b<<endl;
    cout<<"The Value of a - b = "<<a-b<<endl;
    cout<<"The Value of a * b = "<<a*b<<endl;
    cout<<"The Value of a / b = "<<a/b<<endl;
    cout<<"The Value of a % b = "<<a%b<<endl;
    cout<<"The Value of a++ = "<<a++<<endl;
    cout<<"The Value of a-- = "<<a--<<endl;
    cout<<"The Value of ++a = "<<++a<<endl;
    cout<<"The Value of --a = "<<--a<<endl;
    cout<<endl;

    // Assigment Operators
    // int a=10,b=20;
    // char c='a';

    // Comparision Operators
    cout<<"These are the Comparision Operators in C++"<<endl;
    cout<<"The Values of a == b = "<<(a==b)<<endl;
    cout<<"The Values of a != b = "<<(a!=b)<<endl;
    cout<<"The Values of a <= b = "<<(a<=b)<<endl;
    cout<<"The Values of a >= b = "<<(a>=b)<<endl;
    cout<<"The Values of a < b = "<<(a<b)<<endl;
    cout<<"The Values of a > b = "<<(a>b)<<endl;
    cout<<endl;

    // Logical operators
    cout<<"These are the Locial Operators in C++"<<endl;
    cout<<"the Value of this 'and' Logical Operator ((a==b) && (a>b)) is = "<<((a==b) && (a>b))<<endl;
    cout<<"the Value of this 'or' Logical Operator ((a==b) || (a>b)) is = "<<((a==b) || (a>b))<<endl;
    cout<<"the Value of this 'not' Logical Operator (!a==b) is = "<<(!(a==b))<<endl;
    cout<<endl;

    // Float and Long Double
    float d= 34.4F;
    long double e=34.4L;
    cout<<"FLOAT and LONG DOUBLE"<<endl;
    cout<<"The value of d = "<<d<<endl<<"The Value of e = "<<e<<endl;
    cout<<"The size of 34.4 = "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f = "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F = "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l = "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L = "<<sizeof(34.4L)<<endl;
    cout<<endl;

    // Reference Variables
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder - EXAMPLE
    float x = 455;
    float & y = x;
    cout<<"This is Reference Variables"<<endl;
    cout<<"The Value of x = "<<x<<endl;
    cout<<"The Value of y = "<<y<<endl;
    cout<<endl;

    // // Typecasting
    int c = 45;   
    float f = 45.46;
    cout<<"This is Typecasting"<<endl;
    cout<<"The value of c is "<<(float)c<<endl;
    cout<<"The value of c is "<<float(c)<<endl;

    cout<<"The value of f is "<<(int)f<<endl;
    cout<<"The value of f is "<<float(f)<<endl;
    

    cout<<"The value of the expression is "<<c + f<<endl;
    cout<<"The value of the expression is "<<c + int(f)<<endl;
    cout<<"The value of the expression is "<<c + (int)f<<endl;
    cout<<"The value of the expression is "<<c + float(f)<<endl;
    cout<<"The value of the expression is "<<c + (float)f<<endl;

    return 0;
}
