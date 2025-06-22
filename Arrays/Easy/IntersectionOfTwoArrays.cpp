#include <bits/stdc++.h>
using namespace std;

vector<int> IntersectionOfTwoarrays(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size(), n2 = arr2.size(), i = 0, j = 0;
    vector<int> intersectionArray;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            intersectionArray.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    

    return intersectionArray;
}

int main(){

    vector<int> arr1 = {1,2,3,4,4,6};
    vector<int> arr2 = {3,4,5,5,6};

    vector<int> ansArray = IntersectionOfTwoarrays(arr1, arr2);

    for(auto it : ansArray){
        cout<<it<<" ";
    }

    return 0;
}