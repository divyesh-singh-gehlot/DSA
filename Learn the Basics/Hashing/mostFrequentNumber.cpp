#include<bits/stdc++.h>
using namespace std;

int mostFrequentElement(vector<int> &arr) {
    int n = arr.size();
    map<int , int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        int minEle = 0;
        int maxFreq = 0;
        for(auto it : mpp){
            if(it.second>maxFreq){
                minEle = it.first;
                maxFreq = it.second;
            }
            else if(minEle > it.first && it.second==maxFreq){
                minEle = it.first;
            }
        }
        return minEle;
    }

    int main(){
        vector<int> arr={1,2,3,4,5,6,6};
        int mostFreq = mostFrequentElement(arr);
        cout<<mostFreq;
        return 0;
    }