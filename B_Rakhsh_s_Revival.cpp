#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int cnt = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') cnt++;
            else cnt = 0;

            if (cnt == m) {
                ans++;
                cnt = 0;
                i += k - 1;  // skip covered segment
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
