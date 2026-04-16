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


bool isprime(ll n){
    if(n<=1)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true ;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        vll a(n+1);
        ll j=2,k=0;
        while(k<n+1){
            if(isprime(j)){a[k]=j;k++;}
            j++;
        }
        for(ll i=0;i<n;i++){ cout<<a[i]*a[i+1]<<" "; }
        cout<<endl;
        
    }
    return 0;
}