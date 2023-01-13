#include <iostream>
using namespace std;

void heapify(int A[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	if (l < n && A[l] > A[largest])
		largest = l;

	if (r < n && A[r] > A[largest])
		largest = r;

	if (largest != i) 
    {
		swap(A[i], A[largest]);
	    heapify(A, n, largest);
	}
}

void heapSort(int A[], int n)
{

	for (int i = n/2 - 1; i >= 0; i--)
		heapify(A, n, i);

	for (int i = n - 1; i > 0; i--) 
    {
		swap(A[0], A[i]);
		heapify(A, i, 0);
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

    heapSort(A, n);

    cout<<"Array elements after Sorting: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}
