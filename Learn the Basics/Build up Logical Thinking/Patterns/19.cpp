#include <iostream>
using namespace std;

void pattern19(int n)
{
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n/2-i;j++){
            cout<<"*";
        }
        for(int j=0; j<2*i; j++){
            cout<<" ";
        }
        for(int j=0; j<n/2-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n/2; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int j=0; j<n-2*i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern19(n);
    return 0;
}