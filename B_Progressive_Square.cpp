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
        ll n,c,d;
        cin>>n>>c>>d;
        vll b(n*n);
        for(auto &x:b)cin>>x;
        sort(all(b));
        vll a(n*n);
        a[0]=b[0];
        for(ll i=1;i<n;i++){
            a[i]=a[i-1]+c;
        }
        for(ll i=1;i<n;i++){
            for(ll j=0;j<n;j++){
                a[i*n+j]=a[(i-1)*n +j]+d;
            }
        }
        sort(all(a));
        cout<<(a==b?"YES\n":"NO\n");

    }
    return 0;
}