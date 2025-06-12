//Print name 'n' times
#include<bits/stdc++.h>
using namespace std;

int c = 0;

void printName(int n){
    if(c == n){
        return;
    }
    cout<<"Divyesh Singh Gehlot"<<endl;
    c++;
    printName(n);
}

int main(){
    int n;
    cin>>n;
    printName(n);
    return 0;
}