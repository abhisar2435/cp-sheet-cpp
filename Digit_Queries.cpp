#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--) {
        long long k;
        cin >> k;
        long long digits = 1;
        long long cnt = 9;
        long long start = 1;
        while (k > cnt * digits) {
            k -= cnt * digits;
            digits++;
            cnt *= 10;
            start *= 10;
        }
        long long offset = (k - 1)/digits;
        long long number = start + offset;
        string s = to_string(number);
        cout << s[(k-1) % digits] << '\n';
    }

    return 0;
}