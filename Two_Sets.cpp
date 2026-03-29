// Problem Link : https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    if(n%4==1 || n%4==2) {cout<<"NO\n"; return 0;}
    vector<ll>a,b;

    if(n%4==0){
        for(ll i=1;i<=n/2;i++){
            if(i%2){
            a.push_back(i);
            a.push_back(n-i+1);}
            else{
                b.push_back(i);
                b.push_back(n-i+1);
            }
        }
    }
    if(n%4==3){
        a={1,2};
        b={3};
        for(ll i=4;i<=n;i+=4){
            a.push_back(i);
            a.push_back(i+3);
            b.push_back(i+1);
            b.push_back(i+2);

        }
    }

    cout<<"YES\n";
    cout<<a.size()<<endl;
    for(ll i:a) cout<<i<<" ";
    cout<<endl<<b.size()<<endl;
    for(ll i:b) cout<<i<<" ";
    
    return 0;
}