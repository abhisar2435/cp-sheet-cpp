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
        ll n;
        cin>>n;
        vll a(n);
        for(auto &x:a)cin>>x;
        bool ans=true;
        fr(i,0,n){
            if( ((2*(i)+1) <n) && (a[i]>a[2*(i)+1]))swap(a[i],a[2*(i)+1]);
        }
        fr(i,0,n-1)if(a[i]>a[i+1])ans=false;
        cout<<(ans==true ?"YES\n":"NO\n");
    }
    return 0;
}