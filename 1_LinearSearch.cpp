#include<iostream>
#include<bits/stdc++.h>
#define size 100
using namespace std;

int main()
{
    int a[size], n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int num, flag=0;
    cout<<"Enter the element you want to search: ";
    cin>>num;

    for(int i=0;i<n;i++){
        if(a[i]==num)
            flag=1;
    }
    if(flag==1) cout<<"Element found."<<endl;
    else cout<<"Element not found."<<endl;

    return 0;
}