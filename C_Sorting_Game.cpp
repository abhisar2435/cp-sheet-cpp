#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int pos = -1;
        for (int i = 0; i + 1 < n; i++) {
            if (s[i] == '1' && s[i+1] == '0') {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
            cout << 2 << "\n";
            cout << pos + 1 << " " << pos + 2 << "\n";
        }
    }
    return 0;
}
