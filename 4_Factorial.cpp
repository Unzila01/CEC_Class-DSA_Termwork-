#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    int fact=1;

    if(num<0){
        cout<<"Factorial of a negative number doesn't exist."<<endl;
    }
    else{
        for(int i=1;i<=num;i++)
        {
            fact*=i;
        }
        cout<<"Factorial of "<<num<<" is "<<fact<<endl;
    }
    
    return 0;
}