#include <iostream>
using namespace std;

void pattern21(int n)
{
    int space, stars;
    for(int i = 1; i<=n; i++){
        if(i==1 || i==n){
            stars = n/2;
            space = 0;
        }
        else{
            stars = 1;
            space = n-2;
        }
        for(int j = 1; j<=stars; j++){
            cout<<"*";
        }
        for(int j = 0; j<space; j++){
            cout<<" ";
        }
        for(int j = 1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern21(n);
    return 0;
}