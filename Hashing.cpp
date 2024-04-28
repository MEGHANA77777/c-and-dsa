#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }

//     //precompute
    //brute fore approach
    // int hash[1000000] = {0};
    // for(int i = 0; i < n; i++){
    //     hash[arr[i]] += 1;
    // }

    //by using map stl
    //stores all values in sorted order
    map<int, int>mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    // //iterate in the map
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
    return 0;
}
