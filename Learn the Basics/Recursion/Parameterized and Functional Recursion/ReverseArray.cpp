#include<bits/stdc++.h>
using namespace std;

//Two Pointer Approach
void rev(int arr[] , int i, int j, int n){
    if(i>=j){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
           
        }
        return;
    }
    swap(arr[i], arr[j]);
    rev(arr, i+1, j-1, n);
}

//using Single pointer
void rev(int arr[] , int i, int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    rev(arr, i+1, n);
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array before swaping: "<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // cout<<"Array after swaping: "<<endl;
    // rev(arr, 0, n-1, n);

    cout<<"Array after swaping: "<<endl;
    rev(arr, 0, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}