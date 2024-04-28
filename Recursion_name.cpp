#include<bits/stdc++.h>
using namespace std;

// int cnt = 0;
// void print(){
//     //Base Condition 
//     if (cnt == 3) return ;
//     cout<<"megha"<<endl;
//     cnt++;
//     print();
// }

// int main(){
//     print();
//     return 0;
// }

//print lineraly from 1 to n

// int i = 0;
// void print(int i,int n){
//     if (i>n){
//         return ;
//     }
//     else{
//         cout<<(i)<<endl;
//         print(i+1,n);
//     }
// }

//printing from n to 1

// int i = 0;
// void print(int i, int n){
//     if (i<1) return;
//     cout<<i<<endl;
//     print(i-1,n);
// }//print(n,n) call in main

//printing 1 to n without using +
//Using Backtracking
//by calling function before print we allow the last funvtion call to  be executed first
// int i = 0;
// void print(int i, int n){
//     if (i<1) return;
//     print(i-1,n);
//     cout<< i<<endl;
// }

//print from n to 1 using backtracking
int i = 1;
void print(int i, int n){
    if (i>n) return;
    print(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    print(i,n);
    return 0;
}