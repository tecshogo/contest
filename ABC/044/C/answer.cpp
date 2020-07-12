#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647
// MAX O(n) 10^18

int main() {
    int N, A;
    cin >> N >> A;
    vector<int> x(N);
    rep(i, N) cin >> x.at(i);

    int ans = 0;
    for (int bits = 1; bits < (1 << (int)x.size()); bits++) {  // 2^N の全ての場合を探索する
        int sum = 0;
        int length = 0;
        for (int i = 0; i < (int)x.size(); i++) {
            int mask = 1 << i;
            if (bits & mask) {  // i番目のbitが立っていれば加算する
                sum += x[i];
                length++;
            }
        }
        if ((double)sum / length == A) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
