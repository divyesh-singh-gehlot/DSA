#include <bits/stdc++.h>
using namespace std;

// Brute-Force (Taking an extra array as in LeftRotateByOne Problem)

// Optimal approach
// Time Complexity -> O(2N) [O(N-D) + O(D) + O(N)]
// Space Complexity -> O(1)
void reverseArray(vector<int> &arr, int x, int y)
{
    while (x <= y)
    {
        swap(arr[x], arr[y]);
        x++;
        y--;
    }
}

void LeftRotateByK(vector<int> &arr, int k)
{
    int n = arr.size();
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
    reverseArray(arr, 0, n - 1);

    cout << "After Left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void RightRotateByK(vector<int> &arr, int k)
{
    int n = arr.size();
    reverseArray(arr, 0, n - k - 1);
    reverseArray(arr, n - k, n - 1);
    reverseArray(arr, 0, n - 1);

    cout << "After Right rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter Value of K: ";
    cin >> k;
    k = k % n;
    cout << k << endl;
    LeftRotateByK(arr, k);
    RightRotateByK(arr, k);

    return 0;
}