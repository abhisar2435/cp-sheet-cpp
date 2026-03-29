// Problem Link : http://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ll n;
    cin>>n;
    for(ll k=1;k<=n;k++){
        ll total= ((k*k) *(k*k -1))/2;
        ll attack=0;
        if(k>=3){
            attack=4*(k-1)*(k-2);
        }
        cout<<total- attack<<'\n';

    }
    return 0;
}