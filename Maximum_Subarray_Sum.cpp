#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long >a(n);
    vector<long long >maxi(n);
    for(auto &x:a)cin>>x;

    maxi[0]=a[0];
    for(int i=1;i<n;i++){
        maxi[i]=max(maxi[i-1]+a[i],a[i]);

    }
    cout<<*max_element(maxi.begin(),maxi.end())<<endl;
    return 0;
}