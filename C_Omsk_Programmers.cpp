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
        int a, b, x;
        cin>>a>>b>>x;
        int ans=INT_MAX, i=0;

        while(a!=b){
            if( b>a) swap(a,b);
            ans=min(ans, i+ abs(a-b));
            a/=x;
            i++;

        }
        ans=min(ans,i);

        cout<<ans<<endl;
    }
    return 0;
}