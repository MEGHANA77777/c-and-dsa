#include<bits/stdc++.h>
using namespace std;

void explainExtra(){
    
    sort(a, a+n);       //sorts entore array
    sort(v.begin(), v.end());       //sort[start,end)
    sort(a+2,a+4);      //sorting only particular part of array
    //sorting in descending order
    sort(a, a+n, greater<int>);

    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    //sort it according to increasing second element
    //if second element is same the sort it accordibg to first element but in descending
    //{4,1} {2,1} {1,2}

    bool comp(pair<int,int>p1, pair<int,int>p2){
        if(p1.second < p2.second) return True;
        if(p1.second >p2.second) return False;
        if (p1.first > p2.first) return True;
    }
    sort(a, a+n, comp);     //comp-self return comparator (boolean function)

    int num = 7;
    int cnt = __builtin_popcount();      //no of bits = 3
    long long num = 16786578687;
    int cnt = __builtin_popcountll();
    string s = "123";       //always use sorted for permutation //sort(s.begin(),s.end())
    do{
        cout << s << endl;
    }
    while(next_permutation(s.begin(), s.end()));
    int maxi = * max_elements(a, a+n);
    //similarly min is also there
}