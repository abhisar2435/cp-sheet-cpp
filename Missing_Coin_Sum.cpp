#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long >a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    long long reach=0;
    for(long long coin:a){
        if(coin>reach+1) {
            break;
        }
        reach+=coin;
    }
    cout<<reach+1<<endl;
    return 0;
}