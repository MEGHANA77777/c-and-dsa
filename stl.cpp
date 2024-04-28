#include<bits/stdc++.h>
using namespace std;

//Containers
void explainPair(){
//pair
pair<int,int>p = {1,3};
cout << p.first << " " << p.second;

//Nested pairs to store more data
pair<int,pair<int,int>> pb= {1,{3,4}};
cout << pb.first << " " << pb.second.first << " " << pb.second.second;

//can also declare a pair array
pair<int,int> arr[] ={{1,2},{2,5},{5,2}};
cout << arr[1].second;
}


void explainVector(){
    vector<int> v;      //Creates an empty container
    v.push_back(1);     //{1}
    v.emplace_back(2);      //{1,2} dynamically allocates and pushes it(more effective than push back)

    vector<pair<int,int>> vec;    //vector pair data type
    vec.push_back({1,2});     //{1,2}
    vec.emplace_back(1,2);      //(1,2)

    vector<int>v(5);
    vector<int>v(5,100);        // size 5 contains 5 instances of 100
    vector<int>v1(5,20);
    vector<int>v2(v1);
    cout << v[0] << v.at(0);
}


//Iterators - Points to the memory address
void vOperation(){
vector<int> v = {10,20,80};
vector<int>::iterator it = v.begin();
it++;
cout << *(it) << " ";
it = it + 2;
cout << *(it) << " ";

vector<int>::iterator it = v.end();
//vector<int>::iterator it = v.rend();
//vector<int>::iterator it = v.rbegin();

cout << v[0] << " " << v.at(0);
cout << v.back() << " ";

for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";
}

// shortcut
for(auto it = v.begin(); it != v.end(); it++){
    cout << *(it) << " ";
}

for(auto it:v){
cout << (it) << " ";
}

//Deletion on a vector
//{10,20,12,32}
v.erase(v.begin()+1);       //{10,12,32}
//{10,34,23,6,9}
v.erase(v.begin()+2, v.begin()+4);      //{10,34,9}

//Insert Function
vector<int>v(2,100);        //{100,100}
v.insert(v.begin(),300);        //{300,100,100}
v.insert(v.begin()+1 , 300);    //{100,300,100}
v.insert(v.begin()+1, 2, 10);       //{300,10,10,100,100}

vector<int>copy(2,50);
v.insert(v.begin(),copy.begin(),copy.end());

cout << v.size();
v.pop_back();
vector<int>v1{30,40};
vector<int>v2{10,20};
v1.swap(v2);
v.clear();  //erases the entrine vector
cout << v.empty();      //False if present or True if no element is present
}

//List- Similar to vector but gives fromt operation and is dynamic in nature
void explainList(){
    //declaration
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    //rest function are similar to that of the vector
    //inserting a vector is costlier and much time also.list internal operation is like doubly
    //linked list and vector is like single linked list
    //push_front is much easier in list

}

//Deque-similar to list and vector
void explainDeque(){
    deque<int>dq;
    dq.push_back(1);    //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4);   //{4,1,2}
    dq.emplace_front(3);    //{3,4,1,2}
    dq.pop_back();      //{3,4,1}
    dq.pop_front();     //{4,1}
    dq.back();
    dq.front();
    //rest of the functions are same as vector
    //begin, end, rebegin, clear, insert, size, swap
}

//Stack follows LIFO
void explainStack(){
    stack<int> st;
    st.push(1);     //{1}
    st.push(2);     //{1,2}
    st.push(3);     //{1,2,3}
    st.push(3);     //{1,2,3,3}
    st.emplace(5);  //{1,2,3,3,5}
    //No indexing and onky push, pop and top operations

    cout <<st.top();  //prints 5  //**st[2] is invalid **
    st.pop();         //{3,3,2,1}
    cout << st.top();   //3
    cout << st.empty();     //False
    stack<int>st1,st2;
    st1.swap(st2);
    //Time complexity of all operations is O(1)
    }

//Queue follows FIFO
void explainQueue(){
    queue<int> q;
    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.push(4);  //{1,2,4}
    q.back() += 5;
    cout << q.back();   //9
    //Q is {1,2,9}
    cout << q.front();  //1
    q.pop();    //{2,9}
    cout << q.front();  //2
    //size, swap, empty same as stack
}

//Priority Queue- the element having the largest value stays at the top (lexiographical largest string)
void explianPQ(){
    priority_queue<int>pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //(8,5,2)
    pq.emplace(10); //{10,8,5,2}
    cout << pq.top();   //10
    pq.pop();   //{8,5,2}
    cout << pq.top();   //8
    //size, swap, empty same as others
    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);     //{5}
    pq.push(2);     //{2,5}
    pq.push(8);     //{2,5,8}
    pq.emplace(10);  //{2,5,8,10}
    cout << pq.top();   //2
    }

//Set - sort everything in order, sorts only unique elements
void explainSet(){
    set<int> st;
    st.insert(1);   //{1}
    st.emplace(2);     //{1,2}
    st.insert(2);   //{1,2}
    st.insert(4);    //{1,2,4}
    st.insert(3);   //{1,2,4,3}
    //begin(), end(), rbegin(), rend(), size(), empty(), swap()
    //{1,2,3,4}
    auto it = st.find(3);   //returns iterator as a pointer to the address
    auto it = st.find(6);   //not present then returns
    //st.end()- iterator points the next location on after the end
    //{2,4,5}
    st.erase(5);    //takes logarithmic time

    int cnt = st.count(1); //present-returns 1 or returns 0
    auto it = st.find(3);
    st.erase(it);   //takes constant time
    auto it1 = st.find(2);  //{1,2,3,4,5}
    auto it2 = st.find(4);
    st.erase(it1, it2); //after erase {1,4,5}   [first, last)
    //lower_bound() and upper_bound() works same as the vectors
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

//Multi Set-Same as set but stores duplicate elements also
void explainMultiSet(){
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1);   //{1,1}
    ms.insert(1);   //{1,1,1}
    ms.erase(1);    //{}
    int cnt = ms.count(1);  //(all)
    ms.erase(ms.find(1));   //erasing single element
    ms.erase(ms.find(1), ms.find(1));   //rest all same functions
}

//Unordered set- Only stores unique elements but randomly stores anywhere
void explainUSet(){
    unordered_set<int>st;
    {
        //lower_bound and upper_bound does not work
        //some exception when collision occurs
    }
}

//Map-stores as {key, values}
//key can be of any data structure
//unique keys in sorted order
void explainMap(){
    map<int,int>mpp;
    map<int, pair<int,int>>mpp;
    map<pair<int,int>,int>mp;
    mpp[1] = 2;
    //mpp.emplace({3,1});
    mpp.insert({2,4});
    mp[{2,3}] = 10; //{}

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mpp[1];
    cout<<mpp[5];
    auto it = mpp.find(3);
   // cout<<*(it).second;
    auto it =mpp.find(5);
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    //erase, swap, size, empty same
}

//MultiMap-Everything same as map, only it can store multiple keys/duplicate keys and it stores in a sorted order
//only mpp[key] can't be used here

//Unordered Map- can't store duplicate keys but not in sorted order only unique key
//same as set and unordered_set difference

int main(){
    return 0;
}