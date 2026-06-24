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
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (auto &x : a)
            cin >> x;
        long long mx = 0;
        for (int i = 0; i<n-1; i++) {
            if (a[i] > a[i+1]) mx = max(mx, a[i] - a[i+1]);

        }
        for (int i = 0; i< n-1; i++) {
            if (a[i] >a[i+1]){
                a[i+1]+=mx;
            }
        }
        if(is_sorted(all(a))) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    return 0;
}