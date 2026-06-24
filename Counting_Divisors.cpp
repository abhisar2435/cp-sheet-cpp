#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> divs(N+1,0);
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            divs[j]++;
        }
    }
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<divs[n]<<endl;
    }

    return 0;
}