#include <iostream>
using namespace std;

void pattern9(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        for (int k = 0; k < n / 2 - i - 1; k++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int k = 0; k < n / 2 - i - 1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern9(n);
    return 0;
}