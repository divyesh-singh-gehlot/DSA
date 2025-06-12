//Print linearly from 1 to n
#include<bits/stdc++.h>
using namespace std;

//Approach 1
// void func(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     n--;
//     func(n);
// }

//Approach 2
void func(int i, int n){
    if(i>n){
        return;
    }
    cout<<n<<endl;
    func(i,n-1);
}


int main(){
    int n;
    cin>>n;
    func(1,n);
    return 0;
}