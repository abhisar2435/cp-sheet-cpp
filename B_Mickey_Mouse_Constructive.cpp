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
#define fr(i,a,b) for(ll i=a;i<b;i++)
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
        ll x,y;
        cin>>x>>y;
        ll sum=abs(x-y),ans=0;

        for(int i=1;i<=sum;i++) if(sum%i==0) ans++;

        if(ans==0)ans=1;
        if(x>=y){
            cout<<ans<<endl;
            for(int i=0;i<y;i++)cout<<-1<<" ";
            for(int i=0;i<x;i++) cout<<1<<" ";
            cout<<endl;
        }
        else {
            cout<<ans<<endl;
            for(int i=0;i<x;i++)cout<<1<<" ";
            for(int i=0;i<y;i++)cout<<-1<<" ";
            cout<<endl;
        }
    }
    return 0;
}