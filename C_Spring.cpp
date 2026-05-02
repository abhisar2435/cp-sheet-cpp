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
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll lab=lcm(a,b), lac=lcm(a,c),lbc=lcm(b,c);
        ll labc=lcm(lab,c);
        ll aa= 6*(m/a -m/lab -m/lac +m/labc) +3*(m/lab +m/lac -2*(m/labc)) +2*(m/labc);
        ll ab= 6*(m/b -m/lab -m/lbc + m/labc) +3*(m/lab +m/lbc -2*(m/labc)) +2*(m/labc);
        ll ac= 6*(m/c -m/lbc -m/lac +m/labc) +3*(m/lbc +m/lac -2*(m/labc)) +2*(m/labc);
        cout<<(aa>=0?aa:0)<<" "<<(ab>=0?ab:0)<<" "<<(ac>=0?ac:0)<<endl;
    }
    return 0;
}