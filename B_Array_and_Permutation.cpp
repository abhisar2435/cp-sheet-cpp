// Problem Link : 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define endl '\n'

#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
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
        vll p(n),a(n);
        for(auto &x:p)cin>>x;
        for(auto &x:a)cin>>x;
        bool ans=true;
        vll ind(n+1);
        for(ll i=0;i<n;i++){
            ind[p[i]]=i+1;
        }
        ll temp=a[0];
        for(ll i=1;i<n;i++){
            if(ind[a[i]]>=ind[temp])  temp=a[i];
            else{ ans=false;break;}
        }
        cout<<(ans?"YES": "NO")<<endl; 
    
    }

    return 0;
}