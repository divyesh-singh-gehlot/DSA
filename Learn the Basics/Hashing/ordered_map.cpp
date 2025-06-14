#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    map<char, int> mpp;

    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
    }

    // for(auto itr : mpp){
    //     cout<<itr.first<<" -> "<<itr.second<<endl;
    // }

    cout<<"Enter character: ";
    char c;
    cin>>c;

    cout<<mpp[c]<<endl;

    return 0;
}