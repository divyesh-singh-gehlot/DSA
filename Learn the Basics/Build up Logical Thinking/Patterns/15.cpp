#include <iostream>
using namespace std;

void pattern15(int n)
{
    char c;
    for(int i=0; i<n; i++){
        for(int j=65; j<65+n-i;j++){
            c=j;
            cout<<c;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern15(n);
    return 0;
}