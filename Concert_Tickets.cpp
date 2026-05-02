#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m;
    cin>>n>>m;
    multiset<long long>h;
    for(long long i=0;i<n;i++){
        long long x;
        cin>>x;
        h.insert(x);
    }
    for(long long i=0;i<m;i++){
        long long x;
        cin>>x;
        auto it=h.upper_bound(x);
        if(it==h.begin()) cout<<-1<<endl;
        else {
            --it;
            cout<<*it<<endl;
            h.erase(it);
        }

    }
    
    return 0;
}
