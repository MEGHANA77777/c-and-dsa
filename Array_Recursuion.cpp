//Reversing an array
#include<bits/stdc++.h>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

void printArray(int ans[], int n){
    cout <<"The reversed array is: "<<endl;
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
}

//Using same array 
void reverseArray(int arr[],int n){
    int p1 = 0,p2 = n-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++,p2--;
    }
    printArray(arr,n);
}

//Using single variable/extra array
// void reverseArray(int arr[], int n){
//     int ans[n];
//     for(int i = n-1; i>=0;i--){
//         ans[n-i-1] = arr[i];
//     }
//     printArray(ans, n);
// }

//Recursive Mwthod
// void reverseArray(int i, int arr[], int n){
//     if(i>=n/2) return;
//     swap(arr[i], arr[n-i-1]);
//     reverseArray(i+1,arr,n);
// }

//Library function #include algorithm
//Reverse array using library function
// void reverseArray(int arr[], int n) {
//    //Reversing elements from index 0 to n-1 
//    reverse(arr, arr + n);
// }

int main(){
    int n = 5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr, n);
    //printArray(arr,n);
    return 0;
}