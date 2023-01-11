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

    int key, j;
    for(int i=1;i<=n-1;i++)         
    {
        key=A[i];
        j=i-1;
        while (j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }

    cout<<"Array elements after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}