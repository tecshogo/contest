#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回
// double pi = M_PI or acos(-1)

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> h(n);
    rep(i, n) cin >> h.at(i);
    vector<ll> a(m), b(m);
    rep(i, m) cin >> a.at(i) >> b.at(i);

    ll ans = 0;
    rep(i, n) {  // 展望台ループ
        bool isOk = true;
        rep(j, m) {  // 道ループ
            if (i == a.at(j) - 1) { // a配列に値がある場合
                if (h.at(i) <= h.at(b.at(j) - 1)) isOk = false;
            } else if (i == b.at(j) - 1) { // b配列に値がある場合
                if (h.at(i) <= h.at(a.at(j) - 1)) isOk = false;
            }
        }
        if (isOk) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
