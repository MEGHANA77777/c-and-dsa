//Using parameterised method
#include<bits/stdc++.h>
using namespace std;

// void summ(int i, int sum){
//     if (i<1) {
//         cout<<sum;
//         return;
//     }
//     summ(i-1, sum + i);
// }

// int main(){
//     int i;
//     cin>>i;
//     summ(i,0);
// }

//Using Functional
int summ(int n){
    if (n==0) {return 0;}
    return n + summ(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<(summ(n));
}