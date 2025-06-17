//Time Complexity -> NLog(N)
//Space Complexity -> O(1) as no extra space is used as it was used in Merge Sort

#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low], i = low, j = high;
    while(i<j){
        while(pivot>=arr[i] && i<=high){
            i++;
        }
        while(pivot<arr[j] && j<=high){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void Sort(vector<int> &arr, int low, int high)
{
    if(low<high){
        int pIndex = Partition(arr, low, high);
        Sort(arr, low, pIndex - 1);
        Sort(arr, pIndex + 1 , high);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    Sort(arr, 0, n - 1);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
