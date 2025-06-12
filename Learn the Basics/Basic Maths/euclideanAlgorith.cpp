//Gives GCD in better time Complexity - O(log (min(a,b)))
//GCD(a,b) = GCD(biggerNumber % smallerNumber , b)
//or
//GCD(a,b) = GCD(a%b, b) where a>b

#include<bits/stdc++.h>
using namespace std;

void euclidean(int x, int y){
    int GCD = 1;
    while(x>0 && y>0){
        if(x>y) x%=y;
        else if(y>x) y%=x;
        if(x==0) cout<<y;
        else if(y==0) cout<<x;
    }
}

int main(){
    int x, y;
    cin>>x>>y;
    euclidean(x,y);
}