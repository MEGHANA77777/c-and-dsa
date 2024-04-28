#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findUnique(int A[],int n){
    int unique = 0;
    for(int i = 0; i < n; i++){
         unique = unique ^ A[i];
    }
    return unique;
}

int main()
{
    int A[]={ 2,3,5,6,3,2,5};
    int res = findUnique(A,7);
    cout << "The unique element of array is " << res ; 
}