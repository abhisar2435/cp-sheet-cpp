#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ok = true;
        for (int r = 0; r < k; r++) {
            int ones = 0;
            for (int i = r; i < n; i += k) {
                if (s[i] == '1')
                    ones++;
            }
            if (ones & 1) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}