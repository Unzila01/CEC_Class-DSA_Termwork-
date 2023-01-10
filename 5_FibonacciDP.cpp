#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int f[100];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n-1];
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<n<<"th Fibonacci term is "<<fib(n);

    return 0;
}