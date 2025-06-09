#include<bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> m;

    //Ways to insert data
    m.insert({1,2});
    m.emplace(3,4);
    m[5]=6;

    //Display Data
    for(auto it : m){
        cout<<"Key: "<<it.first<<" -> Value: "<<it.second<<endl;
    }

    //Display particular data from id
    cout<<m[3]<<endl;
    cout<<m[5]<<endl;
}