// Problem Link : 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define fr(i,a,b) for(ll i=0;i<n;i++)
#define pb push_back
#define ff first
#define ss second
const int MOD = 1e9+7;
const int INF = 1e9;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        vll a(n);
        for( auto &x :a) cin>>x;
        ll sum=accumulate(a.begin(),a.end(),0LL);
        if(sum&1)cout<<"YES\n";
        else{
            if((n*k)%2==0) cout<<"YES\n";
            else cout<<"NO\n";
        }

    }
    return 0;
}