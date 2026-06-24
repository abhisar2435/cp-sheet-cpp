#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  n,m;
    cin>>n>>m;
    vector<pair<long long,long long>>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());

    long long l=0,r=n-1;
    while(l<r){
        long long sum=a[l].first+a[r].first;
        if(sum==m) {
            cout<<a[l].second<<" "<<a[r].second<<endl;
            return 0;
        }
        else if(sum <m) l++;
        else r--;
    }    
    cout << "IMPOSSIBLE\n";

}