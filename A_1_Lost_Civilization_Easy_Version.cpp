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
        ll n;
        cin>>n;
        vll v(n);
        for(auto &x:v)cin>>x;
        ll cnt=0;
        map<ll,ll>mp;
        fr(i,0,n){
            mp[v[i]]++;
            if(mp[v[i]-1]==0) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}