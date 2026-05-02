#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll p,q;
        cin>>p>>q;
        if(p<q && min(p/2,q/3)>=q-p)cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
    return 0;
}