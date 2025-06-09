#include<bits/stdc++.h>
using namespace std;

void countDigits(int n){

    int x = n;
    //Approach 1
    int count = 0;
    while(x>0){
        int digit = x % 10;
        x/=10;
        count++;
    }
    cout<<"Approach 1: "<<count<<endl;

    //Approach 2
    int c = (int)(log10(n)+1);
    cout<<"Approach 2: "<< c;
}

int main(){
    int n;
    cin>>n;
    countDigits(n);
}