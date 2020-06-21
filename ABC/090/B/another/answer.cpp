#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;
    for (int i = A; i <= B; i++) {
        int s = i % 10, t = (i / 10000) % 10;
        int v = (i / 10) % 10, u = (i / 1000) % 10;
        if (s == t && v == u) ans++;
    }

    cout << ans << endl;

    return 0;
}
