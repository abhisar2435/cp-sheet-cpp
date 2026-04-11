#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,x;
    cin>>n>>x;
    vector<long long >a(n);

    for(long long i=0;i<n;i++)cin>>a[i];
    long long i=0,j=n-1,cnt=0;
    sort(a.begin(),a.end());
    while(i<=j){
        if(a[i]+a[j]>x) {cnt++;j--;}
        else {cnt++;i++;j--;}
    }
    cout<<cnt<<endl;
    return 0;
}