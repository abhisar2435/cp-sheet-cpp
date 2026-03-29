#include <bits/stdc++.h>
using namespace std;

static const int MAXA = 1'000'000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }


    vector<int> spf(MAXA + 1);
    for (int i = 1; i <= MAXA; i++) spf[i] = i;

    for (int i = 2; i * i <= MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXA; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
    vector<int> max_losing(MAXA + 1, 0);

    vector<char> dp(N, 0);

    for (int i = N - 1; i >= 0; i--) {
        int val = A[i];
        int temp = val;

        bool win = false;
        while (temp > 1) {
            int p = spf[temp];
            while (temp % p == 0) temp /= p;

            if (max_losing[p] > val) {
                win = true;
                break;
            }
        }

        dp[i] = win;

       
        if (!win) {
            temp = val;
            while (temp > 1) {
                int p = spf[temp];
                while (temp % p == 0) temp /= p;
                max_losing[p] = max(max_losing[p], val);
            }
        }
    }

    cout << (dp[0] ? "Eleven\n" : "Vecna\n");
    return 0;
}
