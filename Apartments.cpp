/*Problem Link :https://cses.fi/problemset/task/1084*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector <long long>

int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    vll a(n),b(m);
    for (auto &x:a)cin>>x;
    for(auto &x:b) cin>>x;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll i=0,j=0,cnt=0;
    while(i<n || j<m){
        if(a[i]>=b[j]-k && a[i]<=b[j]+k) {i++;j++;cnt++;}
        else if (a[i]<b[j]-k) i++;
        else if (a[i]>b[j]+k) j++;
    }
    cout<<j-1<<endl;
    return 0;
}