#include <bits/stdc++.h>
using namespace std;

vector<int> UnionOfTwoarrays(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size(), n2 = arr2.size(), i = 0, j = 0;
    vector<int> unionArray;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != arr1[i])
            {
                unionArray.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != arr2[j])
            {
                unionArray.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArray.size() == 0 || unionArray.back() != arr1[i])
        {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArray.size() == 0 || unionArray.back() != arr2[j])
        {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }

    return unionArray;
}

int main(){

    vector<int> arr1 = {1,2,3,4,4,6};
    vector<int> arr2 = {3,5,6};

    vector<int> ansArray = UnionOfTwoarrays(arr1, arr2);

    for(auto it : ansArray){
        cout<<it<<" ";
    }

    return 0;
}