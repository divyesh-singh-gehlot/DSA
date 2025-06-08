#include <iostream>
using namespace std;

void pattern14(int n)
{
    char c;
    for(int i=0; i<n; i++){
        for(int j=65; j<=65+i;j++){
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
    pattern14(n);
    return 0;
}