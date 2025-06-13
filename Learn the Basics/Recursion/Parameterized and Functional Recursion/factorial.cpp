#include<bits/stdc++.h>
using namespace std;

//Functional Recursion
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){

    int n;
    cin>>n;

    int factorial = fact(n);
    cout<<factorial<<endl;

    return 0;
}