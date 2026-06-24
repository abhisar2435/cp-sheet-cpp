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
        int n;
        cin>>n;
        string p,q;
        cin>>p>>q;
        int x=0,y=0;
        bool ans=true;
        for(int i=0;i<n;i++){
            if(p[i]=='(' && q[i]=='(') {
                x++;y++;
            }
            else if(p[i]==')' && q[i]==')') {
                x--;y--;
            }
            else {
                if(x<=y){
                    x++;y--;
                }
                else {x--;y++;}
            }
            if(x<0 || y<0){
                ans=false;
                break;

            }
        }
        if(x != 0 || y != 0) ans= false;
        cout<<(ans ? "YES": "NO")<<endl;

    }
    return 0;
}