#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    // Create Array
    int x = s.size();
    int hash[x] = {0};

    // Pre Computation
    for (int i = 0; i < x; i++)
    {
        int index = s[i] - 64-1;
        hash[index] += 1;
    }

    for (int i = 0; i < x; i++)
    {
        cout<<hash[i];
    }
    cout<<endl;
    cout << "Enter the character whose frequency you want to find: ";
    char y;
    cin >> y;

    int z = y-65;
    cout << y << " appeard " << hash[z] << " times.";
    return 0;
}