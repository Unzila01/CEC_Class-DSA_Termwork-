#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int A[], int low, int high)
{
    int pivot=A[low];
    int i=low+1;
    int j=high;

    do{
        while(A[i]<=pivot)
        {
            i++;
        }
        while (A[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(A[i], A[j]);
        }

    }while(i<j);

    swap(A[low], A[j]);

    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex;
    if(low<high)
    {
        partitionIndex=partition(A, low, high);
        quickSort(A, low, partitionIndex-1);
        quickSort(A, partitionIndex+1, high);
    }
}

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

    quickSort(A, 0, n);

    cout<<"Array elements after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}