#include<iostream>

using namespace std;

int main(){

    // ANY OF THE TWO WAYS CAN BE USE TO DEFINE AN ARRAY !!!
    int engmarks[] = {25,67,68,98,43};

    int mathmarks[5];
    mathmarks[0] = 20;
    mathmarks[1] = 30;
    mathmarks[2] = 45;
    mathmarks[3] = 82;
    mathmarks[4] = 91;

    cout<<"THESE ARE MATHS MARKS"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;

    cout<<"THESE ARE ENGLISH MARKS"<<endl;
    cout<<engmarks[0]<<endl;
    cout<<engmarks[1]<<endl;
    cout<<engmarks[2]<<endl;
    cout<<engmarks[3]<<endl;
    cout<<engmarks[4]<<endl;

    for (int i = 0; i <=5; i++)
    {
        cout<<"THE MATHS MARKS OF VALUE "<<i<<" is "<<mathmarks[i]<<endl;
    }
    
    for (int i = 0; i <=5; i++)
    {
        cout<<"THE ENGLISH MARKS OF VALUE "<<i<<" is "<<engmarks[i]<<endl;
    }
    
    return 0;
}