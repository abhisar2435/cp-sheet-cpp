#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool hasEven = false, hasOdd = false;

        for (auto x : a) {
            if (x % 2 == 0) hasEven = true;
            else hasOdd = true;
        }

        if (hasEven && hasOdd) {
            cout << "YES\n";
        } else {
            if (is_sorted(a.begin(), a.end()))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}