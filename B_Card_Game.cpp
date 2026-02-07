#include <bits/stdc++.h>
using namespace std;
int f(int a,int b){
    if(a>b)return 1;
    if(a==b)return 0;
    return -1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        int ans=0;
    
        if(f(a1,b1)+f(a2,b2) >0) ans+=2;
        if(f(a1,b2)+f(a2,b1) >0) ans+=2;
        
        cout<<ans<<endl;
   }
    return 0;
}