#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(15);
    v1.push_back(20);

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *(it) << " ";
    }
    //"auto is used for variables whose data type is not known. It automatically takes the datatype from the variable"
    auto x = 10;
    auto y = "Divyesh";
    cout<<x<<" "<<y;

    //for-each loop
    for(auto it : v1){
        cout << it << " ";
    }
    cout<<endl;

    v1.erase(v1.begin());

    for(auto it : v1){
        cout << it << " ";
    }
    cout<<endl;
    v1.erase(v1.begin(), v1.end());
     for(auto it : v1){
        cout << it << " ";
    }
    cout<<endl;
}
