#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Job{
	char id;
	int deadline, profit;
};

bool compare(Job a, Job b)
{
	return (a.profit > b.profit);
}

void printJobScheduling(Job A[], int n)
{
	sort(A, A + n, compare);

	int result[n]; 
	bool slot[n];

	// All slots are free initially
	for (int i=0;i<n;i++)
		slot[i] = false;

	for (int i=0;i<n;i++) 
    {
		for (int j=min(n, A[i].deadline)-1; j>=0; j--) 
        {
			if (slot[j] == false) 
            {
				result[j] = i;
				slot[j] = true; 
				break;
			}
		}
	}

	for (int i = 0; i < n; i++)
		if (slot[i])
			cout << A[result[i]].id << " ";
}

int main()
{
    int n;
    cout<<"Enter the number of Jobs: ";
    cin>>n;
    struct Job A[n];
    cout<<"Enter the Job Id, Deadline and Profit of Job: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i].id>>A[i].deadline>>A[i].profit;
    }

	cout<<"Following is maximum profit sequence of jobs: ";
	printJobScheduling(A, n);

	return 0;
}

// Output
// Enter the number of Jobs: 5
// Enter the Job Id, Deadline and Profit of Job: 
// a 2 100
// b 1 19
// c 2 27
// d 1 25
// e 3 15
// Following is maximum profit sequence of jobs: c a e 
