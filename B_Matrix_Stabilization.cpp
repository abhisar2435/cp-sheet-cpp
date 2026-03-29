#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>a(n,vector<ll>(m));
        for(auto &row:a){
            for(auto &x:row){
                cin>>x;
                
            }
        }
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                ll maxi=0;
                if(i>0)maxi=max(maxi,a[i-1][j]);
                if(j>0)maxi=max(maxi,a[i][j-1]);
                if(i<n-1)maxi=max(maxi,a[i+1][j]);
                if(j<m-1)maxi=max(maxi,a[i][j+1]);
                if(a[i][j]>maxi)a[i][j]=maxi;
            }
        }
        for(auto &row:a){
            for(auto &x:row){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}