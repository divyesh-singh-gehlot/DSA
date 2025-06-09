#include <iostream>
using namespace std;

void pattern20(int n)
{
    int stars, space;
    for (int i = 1; i <= n; i++)
    {
        if (i > n / 2 + 1)
        {
            stars--;
            space += 2;
        }
        else
        {
            stars = i;
            space = n - 2 * i + 1;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern20(n);
    return 0;
}