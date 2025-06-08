#include <iostream>
using namespace std;

void pattern16(int n)
{
    char c =65;
    for(int i=0; i<n; i++){
        for(int j=65; j<=65+i;j++){
            cout<<c;
        }
        c++;
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern16(n);
    return 0;
}