#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  n;
    cin>>n;
    map<long long, long long>mp;
    for(long long  i=1;i<=n;i++){
        long long  p;
        cin>>p;
        mp[p]=i;
    }
    long long round=1;
    for(long long i=2;i<=n;i++){
        if(mp[i]<mp[i-1])round++;
    }
    cout<<round<<endl;

    return 0;
}