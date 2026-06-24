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
        ll n,tab,s;
        cin>>n>>tab>>s;
        string st;
        cin>>st;

        ll empty=0,ans=0,omni=0;
        for(char ch:st){
            if(ch=='E'){
                if(empty!=0){empty--;ans++;}
                else if(omni && tab){
                    omni--;
                    tab--;
                    empty+=s-1;
                    ans++;
                }
            }
            else if(ch=='I'){
                if(tab!=0){
                    tab--;
                    empty+=s-1;
                    ans++;
                }
            }
            else {
                if(empty==0) {
                    if(tab!=0) {
                        tab--;
                        empty+=s-1;
                        ans++;
                    }
                }
                else {
                    omni++;
                    empty--;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}