#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int sum=0;
        
        for(int i=0;i<n;i++)  cin>>a[i];
        if(a[0]==-1 && a[n-1]==-1) {
            a[0]=0;
            a[n-1]=0;
            
        } 
        else if( a[0]==-1 && a[n-1]!=-1) a[0]=a[n-1];
        else if(a[0]!=-1 && a[n-1]==-1) a[n-1]=a[0];
        if(n>2){
            for(int i=1;i<n-1;i++){
                if(a[i]==-1) a[i]=0;
            }
        }
        vector<int>b(n-1);

        for(int i=0;i<n-1;i++) {
            b[i]=a[i+1]-a[i];
            sum+=b[i];
        }
        cout<<abs(sum)<<endl;
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
        
    }

}