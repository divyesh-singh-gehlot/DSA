//Print from 1 to N using Backtracking
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
    if(i<1){
        return;
    }
    func(i-1,n);
    cout<<i<<endl;
}


int main(){
    int n;
    cin>>n;
    func(n,n);
    return 0;
}