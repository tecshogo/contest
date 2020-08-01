#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18

int main() {
    ll N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A.at(i);

    ll ans = 1;
    rep(i, N) {
        if (A.at(i) != 0 && ans * A.at(i) != (ll)pow(10, 18) && to_string(ans).size() + to_string(A.at(i)).size() >= 20) {
            ans = (ll)pow(10, 18) + 1;
        } else {
            ans *= A.at(i);
        }
    }

    if(ans > (ll)pow(10, 18)) {
        ans = -1;
    }

    cout << ans << endl;

    return 0;
}
