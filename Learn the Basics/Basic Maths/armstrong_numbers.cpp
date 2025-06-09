#include<bits/stdc++.h>
using namespace std;

void armstrongNumber(int n){
    int x = n;
    int count = 0;
    int arm=0;
    while(n>0){
        int last = n%10;
        n=n/10;
        count++;
    }
    n=x;
    while(n>0){
        int last = n%10;
        cout<<"Last :"<<last<<endl;
        n=n/10;
        arm+=round(pow(last,count));
        cout<<arm<<endl;
    }
    if(arm==x){
        cout<<"It is armstrong";
    }else{
        cout<<"It is not armstrong";
    }
}

int main(){
    int n;
    cin>>n;
    armstrongNumber(n);
}