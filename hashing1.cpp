#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    //pre compute
    //lower case : char - 'a'
    //upper case : char - 'A'
    int hash[256] = {0};    //all characters because of autocast it works
    for(int i = 0; i < s.size();i++){
        hash[s[i]]++;
    }

    // map<char, int>mpp;  //unorederd_map<char, int>mpp;
    // for(int i = 0; i < s.size(); i++){
    //     mpp[s[i]]++;
    // }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout<<hash[c]<<endl;
    }
    return 0;
}