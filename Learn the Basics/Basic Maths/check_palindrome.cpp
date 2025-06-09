#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n){
    int rev = 0;
    int x = n;
    while(n>0){
        int last = n%10;
        n=n/10;
        rev = rev*10 + last;
    }
    if(rev==x){
        cout<<"It is Palindrome";
    }else{
        cout<<"It is not Palindrome";
    }
}

int main(){
    int n;
    cin>>n;
    reverseNumber(n);
}