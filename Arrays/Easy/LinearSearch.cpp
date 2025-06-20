#include <bits/stdc++.h>
using namespace std;

//Time Complexity - O(N)
//Space Complexity - O(1)
void LinearSearch(vector<int> &arr, int k)
{
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            cout<<"Found at "<<i<<" index."<<endl;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin>>k;
    LinearSearch(arr,k);

    return 0;
}