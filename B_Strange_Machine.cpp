#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        vector<long long> queries(q);
        for (auto &x : queries) cin >> x;

        bool hasB = false;
        for (char c : s)
            if (c == 'B') hasB = true;

        for (long long x : queries) {
            if (!hasB) {
                cout << x << "\n";
                continue;
            }

            long long steps = 0;
            int i = 0;

            while (x > 0) {
                if (s[i] == 'A') {
                    x--;
                } else { 
                    x >>= 1;
                }
                steps++;
                i++;
                if (i == n) i = 0;
            }

            cout << steps << "\n";
        }
    }
    return 0;
}
