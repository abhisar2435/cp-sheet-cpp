/*Problem Link :https://cses.fi/problemset/task/1621 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(auto &x:v)cin>>x;
    set<long long>st;
    for(long long i:v)st.insert(i);
    cout<<st.size()<<endl;
    return 0;
}