#include<bits/stdc++.h>
using namespace std;

//Using Functional Recursion
// int fact(int n){
//     if (n==1){return 1;}
//     return fact(n-1) * n;
// }

//Using Parameterised recursion
void fact(int i, int f){
    if (i < 1) {
    cout<<f;
    return ;
    }
    fact(i-1,f*i);
}

int main(){
    int n;
    cin >> n;
    (fact(n,1));
    return 0;
}