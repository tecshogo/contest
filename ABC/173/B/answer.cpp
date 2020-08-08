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
    int N;
    cin >> N;
    vector<string> S(N);
    rep(i, N) cin >> S.at(i);

    vector<int> C(4, 0);

    rep(i, N) {
        if ("AC" == S.at(i)) {
            C.at(0)++;
        } else if ("WA" == S.at(i)) {
            C.at(1)++;
        } else if ("TLE" == S.at(i)) {
            C.at(2)++;
        } else if ("RE" == S.at(i)) {
            C.at(3)++;
        }
    }

    cout << "AC x " << C.at(0) << endl;
    cout << "WA x " << C.at(1) << endl;
    cout << "TLE x " << C.at(2) << endl;
    cout << "RE x " << C.at(3) << endl;

    return 0;
}
