#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a(n),b(n),cnt;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    int i=0,j=0,x=0;
    while(i<n && j<n){
        if(a[i]<b[j]){x++;i++;}
        else {x--;j++;}
        cnt.push_back(x);
    }
    cout<<*max_element(cnt.begin(),cnt.end())<<endl;
    return 0;
}