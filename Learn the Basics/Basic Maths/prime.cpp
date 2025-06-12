#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    int count = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if(n/i!=i){count++;}
        }
        
    }
    cout<<count<<endl;
    if(count==2) cout<<"true";
    else cout<<"false";
}

int main(){
    int n;
    cin>>n;
    prime(n);
}