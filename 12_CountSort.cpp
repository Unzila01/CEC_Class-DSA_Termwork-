#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countSort(int *A, int *B, int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>maxi){
            maxi=A[i];
        }
    } 

    int C[100];
    for(int i=0;i<=maxi;i++)
    {
        C[i]=0;
    }
    for(int j=0;j<n;j++){
        C[A[j]]++;
    }
    for(int i=1;i<=maxi;i++)
    {
        C[i]+=C[i-1];
    }
    for(int j=n-1;j>=0;j--)
    {
        B[C[A[j]]-1]=A[j];
        C[A[j]]--;
    }
}

int main()
{
    int A[100], B[100], n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    countSort(A, B, n);

    cout<<"Array elements after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<B[i]<<" ";
    }
    
    return 0;
}