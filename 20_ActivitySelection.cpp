// Activity Selection Problem or Maximum Disjoint Intervals

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Activity
{
    int start, finish;
};

bool compare(Activity a1, Activity a2)
{
    return (a1.finish < a2.finish);
}

void printMaxActivity(Activity A[], int n)
{
    sort(A, A+n, compare);
    int count=1;
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(A[i].start >= A[j].finish){
            count++;
            j=i;
        }
    }
    cout<<"Number of non-conflicting Activities: "<<count<<endl; 

}

int main()
{
    int n;
    cout<<"Enter the number of Activities: ";
    cin>>n;

    struct Activity A[n];
    cout<<"Enter the Starting time and Finish time of Activity: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i].start>>A[i].finish;
    }
    printMaxActivity(A, n);

    return 0;
}