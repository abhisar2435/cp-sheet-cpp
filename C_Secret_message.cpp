#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<string> s(k);
        for (int i = 0; i < k; i++) cin >> s[i];
        vector<uint32_t> col(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                col[i] |= 1u << (s[j][i] - 'a');
            }
        }
        vector<int> divisors;
        for (int d = 1; d * d <= n; d++) {
            if (n % d == 0) {
                divisors.push_back(d);
                if (d * d != n) divisors.push_back(n / d);
            }
        }
        sort(divisors.begin(), divisors.end());

        for (int d : divisors) {
            bool ok = true;
            vector<char> base(d);

            for (int r = 0; r < d && ok; r++) {
                uint32_t cur = (1u << 26) - 1;

                for (int pos = r; pos < n; pos += d) {
                    cur &= col[pos];
                    if (cur == 0) {
                        ok = false;
                        break;
                    }
                }

                if (ok) {
                    int c = __builtin_ctz(cur); 
                    base[r] = char('a' + c);
                }
            }

            if (ok) {
                string ans;
                for (int i = 0; i < n; i++) {
                    ans += base[i % d];
                }
                cout << ans << "\n";
                break;
            }
        }
    }
    return 0;
}
