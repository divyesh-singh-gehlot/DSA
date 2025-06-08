#include <iostream>
using namespace std;

void pattern17(int n)
{
    for(int i = 1; i<=n; i++){
        char start = 65;
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        int x = (2*i-1);
        for(int j=1; j<=x; j++){
            cout<<start;
            if(j>(x/2)){
                start--;
            }
            else{
                start++;
            }
        }
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}