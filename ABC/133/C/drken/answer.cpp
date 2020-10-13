#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
const int INF = 1001001001;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^8 -> 8回
// double pi = M_PI or acos(-1)
// printf("%.10f\n", ans);

// https://drken1215.hatenablog.com/entry/2019/07/07/233700
int main() {
    ll l, r;
    cin >> l >> r;
    if (r - l > 3000) {
        cout << 0 << endl;
    } else {
        ll ans = 2018;
        for (ll i = l; i < r; i++) {
            for (ll j = i + 1; j <= r; j++) {
                ans = min(ans, (i * j) % 2019);
            }
        }
        cout << ans << endl;
    }
}
