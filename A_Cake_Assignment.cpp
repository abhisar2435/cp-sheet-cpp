// Problem link: https://codeforces.com/problemset/problem/2138/A
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        
        ll k,x;
        cin>>k>>x;
        ll v1=(1LL<<(k+1))-x, c1=x;
        vector<ll>v;
        while(v1 !=c1){
            if(c1< v1){
                v1-=c1;
                c1*=2;
                v.push_back(1);
            }
            if(v1< c1){
                c1-=v1;
                v1*=2;
                v.push_back(2);
            }
        }
        cout<<v.size()<<endl;
        if(v.size()==0) {cout<<endl;continue;}
        
        for(ll i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}