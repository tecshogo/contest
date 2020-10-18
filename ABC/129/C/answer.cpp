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

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, m) cin >> a.at(i);

    ll ans = 0;
    rep(i, m - 1) {
        if (a.at(i) + 1 == a.at(i + 1)) {
            cout << ans << endl;
            return 0;
        }
    }

    ans++;
    ll plus = 0;
    ll times = n - 2 * m;
    rep(i, times) {
        ans += plus;
        ans %= MOD;
        if (i % 2 == 0) plus++;
        cout << ans << endl;
    }

    cout << ans << endl;

    return 0;
}
