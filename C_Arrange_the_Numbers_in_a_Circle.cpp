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
        ll n;
        cin>>n;
        vll c(n);
        for( auto &x:c)cin>>x;
        ll s=accumulate(all(c),0LL),ones=0,slot=0;

        for (ll i=0;i<n;i++){
            if(c[i]==1) ones++;
            else slot+=(c[i]/2)-1;
        }
        if(ones==n-1) slot+=1;
        ll waste= max(0LL,(ones-slot));
        if(s-waste<3) cout<<0<<endl;
        else {cout<<s-waste<<endl;}
    }
    return 0;
}