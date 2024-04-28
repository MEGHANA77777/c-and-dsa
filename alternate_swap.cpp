#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void readArray(int A[],int n)
{
    for(int i = 0; i <n;i++)
    {
        cin >> A[i];
    }
}

void printArray(int A[],int n)
{
    for(int i = 0; i <n;i++)
    {
        cout << A[i] << " ";
    }
}

void alternate_swap(int A[],int n)
{
    for(int i = 0 ; i< n; i+=2)
    {
        if( i < n-1){
            swap(A[i],A[i+1]);
        }
    }
}

int main()
{
    int A[100],n;
    cout << "Enter the size of array:";
    cin >> n;
    int *ptr = (int*)malloc(sizeof(n));
    readArray(A,n);
    cout << " Before swaping the array is:";
    printArray(A,n);
    alternate_swap(A,n);
    cout << "\nAfter swaping the array is:";
    printArray(A,n);
}