#include<bits/stdc++.h>
using namespace std;

//Parameterized Recursion
void pR(int n, int sum){
    if(n<1){
        cout<<sum<<endl;
        return ;
    }
    pR(n-1,sum+n);
}

//Functional Recursion
int fR(int n){
    if(n<1){
        return 0;
    }
    return n+fR(n-1);
}

//Basic Formula
int f(int n){
    return ((n*(n+1))/2);
}

int main(){

    int n;
    cin>>n;
    pR(n,0);

    int sum = fR(n);
    cout<<sum<<endl;

    int sum2 = f(n);
    cout<<sum2<<endl;
    return 0;
}