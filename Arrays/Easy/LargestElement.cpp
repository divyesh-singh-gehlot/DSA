#include<bits/stdc++.h>
using namespace std;

//Recursive Approach (Better than Brute Force due to better Time and space complexity)
//Time Complexity -> O(N)
//Space Complexity -> O(1)

// int findLargestElement(int arr[], int n) {
 
//   int max = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (max < arr[i]) {
//       max = arr[i];
//     }
//   }
//   return max;
// }

//Brute Force Approach:
//Time Complexity -> O(NLogN)
//Space Complexity -> O(N)
int LargestElement(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Largest element is: "<<LargestElement(arr)<<endl;

    return 0;
}