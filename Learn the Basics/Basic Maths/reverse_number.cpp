#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n){
    int rev = 0;
    while(n>0){
        int last = n%10;
        n=n/10;
        rev = rev*10 + last;
    }
    cout<<"Reversed number is: "<<rev<<endl;
}

int main(){
    int n;
    cin>>n;
    reverseNumber(n);
}