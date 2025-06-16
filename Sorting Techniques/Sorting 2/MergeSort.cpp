//Time Complexity -> O(N*log base 2 (N)) or O(N*Log(N)) where N is for merging arrays and LogN is for dividing them.
//Space Complexity -> o(N) due to extra array in Merge Function

#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> arr2(high - low + 1);
    int left = low, right = mid + 1, i = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            arr2[i++] = arr[left++];
        }
        else
        {
            arr2[i++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        arr2[i++] = arr[left++];
    }

    while (right <= high)
    {
        arr2[i++] = arr[right++];
    }

    for (int j = 0; j < arr2.size(); ++j)
    {
        arr[low + j] = arr2[j];
    }
}

void Sort(vector<int> &arr, int low, int high)
{
    if (low >= high) return;

    int mid = low + (high - low) / 2;
    Sort(arr, low, mid);
    Sort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
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
