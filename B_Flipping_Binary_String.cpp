// Problem Link : 
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
        string s;
        cin>>s;
        ll c0=0;
        for(char ch:s){
            if(ch=='0') c0++;
        }
        ll c1=n-c0;
        if (c0 % 2) {
            cout << c0 << "\n";
            for(ll i = 0; i < n; i++){
                if (s[i] == '0'){
                    cout << i + 1 << " ";
                }
            }        
            cout << "\n";
        }
        else if ((c1 % 2) == 0) {
            cout << c1 << "\n";
            if (c1 != 0) {
                for (ll i = 0; i < n; i++){
                    if (s[i] == '1'){
                        cout << i + 1 << " ";
                    }
                }
                cout << "\n";
            }
        }   
        else{
            cout << -1 << "\n";
        }
    }

    return 0;
}