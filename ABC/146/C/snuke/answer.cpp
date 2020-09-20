#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^8 -> 8回
// double pi = M_PI or acos(-1)
// printf("%.10f\n", ans);

ll NMAX = 1000000001;

int main() {
    ll a, b, x;
    cin >> a >> b >> x;

    ll l = 0; ll r = NMAX; // l: o r: x
    auto keta = [&](ll c) {
        int res = 0;
        while (c) {
            c /= 10;
            res++;
        }
        return res;
    };
    auto f = [&](ll c) {
        return a * c + b * keta(c);
    };
    while (r - l > 1) {
        ll c = (l + r) / 2;
        if (f(c) <= x)
            l = c;
        else
            r = c;
    }
    cout << l << endl;
    return 0;
}
