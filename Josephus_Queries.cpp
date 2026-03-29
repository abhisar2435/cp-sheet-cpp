#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, ll k){
    if(n==1) return 1;

    if(k <= n/2) 
        return 2*k;

    ll x = solve((n+1)/2, k - n/2);

    if(n%2==0)
        return 2*x - 1;
    else{
        if(x==1) return n;
        return 2*x - 3;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        cout<<solve(n,k)<<"\n";
    }
}