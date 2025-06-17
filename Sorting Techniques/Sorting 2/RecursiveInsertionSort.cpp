#include<bits/stdc++.h>
using namespace std;

void Sort(vector<int> &arr, int i){
    if(i==arr.size()) return;
    int j = i;
    while(j>0 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    Sort(arr,i+1);
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Sort(arr,1);
    cout<<"Array after sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}