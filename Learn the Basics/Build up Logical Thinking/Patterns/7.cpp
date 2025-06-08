#include<iostream>
using namespace std;

void pattern7(int n){
    for(int i=0; i<n; i++){
            for(int k = 0; k < n-i-1; k++){
                cout<<" ";
            }
            for(int k = 0; k < 2*i+1; k++){
                cout<<"*";
            }
            for(int k = 0; k < n-i-1; k++){
                cout<<" ";
            }
            cout<<endl;
        }
        
    }

int main(){
    int n;
    cin>>n;
    pattern7(n);

    return 0;
}