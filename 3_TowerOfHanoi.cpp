#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char A, char B, char C)
{
    if(n>0){
        TowerOfHanoi(n-1, A, C, B);
        cout<<"("<<A<<" , "<<C<<")"<<endl;
        TowerOfHanoi(n-1, B, A, C);
    }
    

}

int main()
{
    int n;
    cout<<"Enter the number of Disk: ";
    cin>>n;
    TowerOfHanoi(n, 'A', 'B', 'C');

    return 0;

}