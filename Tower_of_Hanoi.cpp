// Problem Link : https://cses.fi/problemset/task/2165
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void hanoi(int n,int from, int to , int aux){
    if(n==0) return;
    hanoi(n-1,from ,aux,to);
    cout<<from<<" "<<to<<endl;
    hanoi(n-1, aux,to, from);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    // total moves =2^n -1
    cout<<(1LL <<n) -1<<endl;
    hanoi(n,1,3,2);

    return 0;
}