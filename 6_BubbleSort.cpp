#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[100], n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<n-1;i++)         // For number of passes
    {
        for(int j=0;j<n-1-i;j++)       // For comparison in each pass
        {
            if(A[j]>A[j+1]){
                swap(A[j], A[j+1]);
            }
        }
    }
    cout<<"Array elements after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}