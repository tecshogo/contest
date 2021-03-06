#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

// long long 用の pow (MAX ll 9,223,372,036,854,775,807 -> 19桁)
ll myLongLongPow(ll base, ll times) {
    ll acc = 1;
    rep(i, times) acc *= base;
    return acc;
}

// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回

int main() {
    string S, T;
    cin >> S >> T;

    int ans = 0;
    rep(i, S.size()) {
        if(S.at(i) != T.at(i)) {
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}
