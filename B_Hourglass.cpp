#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long r = m / k;        
        long long d = m % k;       

        long long x; 
        if(r == 0) {
           
            cout << max(0LL, s - m) << "\n";
            continue;
        }

        if(r % 2 == 1) x = min(s, k); 
        else x = s;                   

        cout << max(0LL, x - d) << "\n";
    }
    return 0;
}
