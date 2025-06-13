#include<bits/stdc++.h>
using namespace std;

//Functional Recursion
bool isPal(string s, int i){
    int n = s.size();
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    
   return isPal(s, i+1);
}

int main(){

    string s;
    cin>>s;
    cout<<isPal(s,0)<<endl;

    return 0;
}