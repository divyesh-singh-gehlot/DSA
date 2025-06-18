#include<bits/stdc++.h>
using namespace std;

string isSorted(vector<int> &arr){
    int n = arr.size();
    string sorted = "true";
    if(n==1) return "true";
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            sorted = "false";
            break;
        }
    }
    return sorted;
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Is the Array Sorted? : "<<isSorted(arr)<<endl;

    return 0;
}