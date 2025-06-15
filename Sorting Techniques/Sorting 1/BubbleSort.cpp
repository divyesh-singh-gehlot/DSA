//This gives the Worst and average time complexity of O(N^2)
//To get the the best time complexity, check if any swap is performed in the firt run and if the swap is not performed, we'll know that the array is sorted so we break out.
//This gives us the best time complexity as O(N) as we run loop only N times.

#include<bits/stdc++.h>
using namespace std;

void Sort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<=(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
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