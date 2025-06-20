#include <bits/stdc++.h>
using namespace std;

//Brute Force Approach
//Traverse the array and copy all the non zero values to a new array...then copy all the non zero values to
//the main array and add zeros at the end

//Time Complexity - O(2N) [O(N)+O(X)+O(N-X)]
//O(N) for copying non-zero elements from the original to the temporary array. O(X) for again copying it back from the temporary to the original array. O(N-X) for filling zeros in the original array. So, the total time complexity will be O(2*N).

//Space Complexity - O(N) //Extra Array

void ZerosToEnd(vector<int> &arr)
{
    int n = arr.size();
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i = j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
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

    ZerosToEnd(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}