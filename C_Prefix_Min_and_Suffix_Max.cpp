#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n),lmin(n),rmax(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        lmin[0]=a[0];
        rmax[n-1]=a[n-1];

        for(int i=1;i<n;i++){
            lmin[i]=min(lmin[i-1],a[i]);   
        }
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],a[i]);
        }

        for(int i=0;i<n;i++){
            if(a[i]==lmin[i] || a[i]==rmax[i]) cout<<'1';
            else cout<<'0';
        }
        cout<<endl;
    }
    return 0;
}
