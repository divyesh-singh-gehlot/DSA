#include <bits/stdc++.h>
using namespace std;

// Brute Force approach
// Time Complexity -> O(N)
// Space Complexity -> O(N) (Extra Array)
//  void LeftRotateByOne(vector<int> &arr)
//  {
//      int n = arr.size();
//      int temp[n];
//      int j = 1;
//      int t = arr[0];
//      for(int i=0; i<n;i++){
//          temp[i]=arr[j];
//          j++;
//      }
//      temp[n-1] = t;

//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
// }

//Optimal Approach
//Time Complexity -> O(N)
//Space Complexity -> O(1)
void LeftRotateByOne(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
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

    LeftRotateByOne(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}