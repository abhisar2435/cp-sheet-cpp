// Problem Link :  Not SOlved 
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
        vll a(n),b(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        vll dup(n);
        for(ll i=0;i<n-1;i++) if(a[i]==a[i+1]){dup[i]=1;dup[i+1]=1;}
        ll cnt=count(dup.begin(),dup.end(),1);
        if(cnt==n){ cout<<0<<endl;continue;}
        ll cnt2=1;
        for(ll i=1;i<n;i++){
            if(dup[i]==0 && a[i]%a[i-1]!=0)cnt2++;
        }
        if(a[0]==a[1])cnt2--;
        cout<<cnt2<<endl;
    }
    return 0;
}