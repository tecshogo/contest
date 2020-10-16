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

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

ll f(ll x, ll c, ll d) {
    ll res = x;
    res -= x / c;
    res -= x / d;
    res += x / lcm(c, d);
    return res;
}

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll ans = f(b, c, d) - f(a - 1, c, d);
    cout << ans << endl;
    return 0;
}