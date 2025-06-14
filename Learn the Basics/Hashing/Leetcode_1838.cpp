// The frequency of an element is the number of times it occurs in an array.
// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.
// Return the maximum possible frequency of an element after performing at most k operations.

#include<bits/stdc++.h>
using namespace std;

int main(){
    //No. of values in Array
    int n;
    cin>>n;

    //No. of Operations
    int k;
    cin>>k;

    //Initialising and sorting array
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    
    //Implementing solution
    int l = 0;
    int total = 0;
    int maxFreq = 0;
    for(int r=0; r<n; r++){
        total+=arr[r];
        while(arr[r]*(r-l+1)-total>k){
            arr[l] -= total;
            l++;
        }
        maxFreq = max(maxFreq, r-l+1);
    }
    cout << "Max Frequency is : "<<maxFreq<<endl;
}