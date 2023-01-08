#include<iostream>
#include<bits/stdc++.h>
#define size 100
using namespace std;

int BinarySearch(int a[], int low, int high, int num)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if (a[mid]==num)
            return mid;
        else if (a[mid]<num)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;

}

int main()
{
    int a[size], n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int num;
    cout<<"Enter the element you want to search: ";
    cin>>num;

    int res=BinarySearch(a, 0, n, num);

    if(res==-1) cout<<"Number not found."<<endl;
    else cout<<"Number found."<<endl;
}