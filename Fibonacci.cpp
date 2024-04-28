#include<bits/stdc++.h>
using namespace std;

//naive approach
// int main(){
//     int n = 5;
//     if(n==0){
//         cout<<0;
//     }else if(n==1){
//         cout<<0<<" "<<1<<"\n";
//     }else{
//         int fib[n+1];
//         fib[0] = 0;
//         fib[1] = 1;
//         for(int i = 2; i <= n; i++){
//             fib[i] = fib[i-1] + fib[i-2];
//         }
//         cout<<"The fibonacci series up to "<<n<<"th term:"<<endl;
//         for(int i = 0; i<=n; i++){
//             cout<<fib[i]<<" ";
//         }
//     }
// }

// int main(){
//     int n = 5;
//     if(n==0){
//         cout<<"The fibonacci series upto "<<n<<"th term: "<<endl;
//         cout<<0;
//     }else{
//         int secondLast = 0;
//         int last = 1;
//         cout<<"The Fibonacci series up to "<<n<<"th term:"<<endl;
//         cout << secondLast<<" "<<last<<" ";
//         int cur;
//         for(int i = 2; i<=n;i++){
//             cur = last + secondLast;
//             secondLast = last;
//             last = cur;
//             cout<<cur<<" ";
//         }
//     }
// }

int fibonacci(int N){
    if(N == 1) return N;

    int last = fibonacci(N-1);
    int slast = fibonacci(N-2);

    return last + slast;
}
int main(){
    int N = 4;
    cout << fibonacci(N) << endl;
    return 0;
}