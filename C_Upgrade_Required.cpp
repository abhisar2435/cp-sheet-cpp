#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1);
    for(int i=0;i<=n;i++) a[i]=i+1;
    while(q--){
        int x,y;
        cin>>x>>y;
        int cnt=0;
        for(int i=0;i<x;i++){
            if(a[i]<y) {
                a[i]=y;
                cnt++;
            }
        }
        for(int i:a)cout<<i<<" ";
        cout<<endl;
        // cout<<cnt<<endl;
    }
    
    return 0;
}