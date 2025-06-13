#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cout<<"Enter total numbers: ";
    cin>>n;

    //Create Array
    int arr[n];
    int hash[n+1] = {0};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Pre Computation
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }

    cout<<"Enter the number whose frequency you want to find: ";
    int x;
    cin>>x;

    cout<<x<<" appeard "<<hash[x]<<" times.";
    return 0;
}