#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    // Create Array
    // int hash[26] = {0}; //For lowercase letters (Similar for Uppercase too)
    int hash[256] = {0}; //For all characters

    // Pre Computation
    for (int i = 0; i < s.size(); i++)
    {
        // hash[s[i]-'a']++; //For lowercase letters (For uppercase-> s[i]-'A')
        hash[s[i]]++; //For all characters
    }

    for (int i = 0; i < 256; i++)
    {
        cout<<hash[i]<<" ";
    }
    cout<<endl;
    cout << "Enter the character whose frequency you want to find: ";
    char y;
    cin >> y;

    cout << y << " appeard " << hash[y-'a'] << " times."; //For lowercase
    cout << y << " appeard " << hash[y] << " times.";
    return 0;
}