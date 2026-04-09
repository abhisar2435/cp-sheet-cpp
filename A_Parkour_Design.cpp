// Problem Link : 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(y>0) x-=(y*2);
        if(y<0) x-= (y*(-4));
        if(x>=0 && x%3==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}