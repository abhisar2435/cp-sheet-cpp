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
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        sort(a.begin(), a.end());

        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }

        int cnt = 1, ans = 1;  
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) continue;        
            if (a[i + 1] == a[i] + 1) cnt++;       
            else cnt = 1;                       
            ans = max(ans, cnt);
        }

        cout << ans << "\n";
    }
    return 0;
}
