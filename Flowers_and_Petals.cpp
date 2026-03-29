// Problem Link :https://www.hackerearth.com/problem/algorithm/juyals-flowers-and-petals/?update=google&purpose=login&source=problem-page&utm_source=new_practice
// Josephus Problem
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll p = 1LL << (63 - __builtin_clzll(n)); // largest power of 2
        cout << 2*(n - p) << endl;
    }
}