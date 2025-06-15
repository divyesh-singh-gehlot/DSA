//Best, Average and Worst Time Complexity - O(N^2)

#include<bits/stdc++.h>
using namespace std;

void Sort(vector<int> &arr){
    int minIndex = 0;
    for(int i=0; i<arr.size(); i++){
        minIndex = arr[i];
        for(int j = i; j<arr.size(); j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    return;
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Sort(arr);
    cout<<"Array after sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}