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

    for(int i=0;i<n-1;i++)        
    {
        int index=i;
        for(int j=i+1;j<n;j++)       
        {
            if(A[j]<A[index]){
                index=j;
            }
        }
        swap(A[i], A[index]);
    }

    cout<<"Array elements after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}