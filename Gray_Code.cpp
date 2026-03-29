// Problem Link : https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    int total=(1<<n);
    for(int i=0;i<total;i++){
        int gray=i ^(i>>1);
        cout<<bitset<16>(gray).to_string().substr(16-n)<<endl;
    }
    

    return 0;
}