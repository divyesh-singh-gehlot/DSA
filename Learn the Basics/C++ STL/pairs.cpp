#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int , int> p1 = {10,20};
    pair<int, pair<int, int>> p2 = {100, {200, 300}};
    pair<int, int> p3[] = {{100, 200}, {300,400}, {500,600}};
    cout<<"P1: "<<p1.first<<" and "<<p1.second<<endl;
    cout<<"P2: "<<p2.first<<" and "<<p2.second.first<<" and "<<p2.second.second<<endl;
    cout<<"P3: "<<p3[0].first<<" "<<p3[0].second<<" "<< p3[1].first<<" "<< p3[1].second<<" "<< p3[2].first<<" "<< p3[2].second<<" ";
    
}