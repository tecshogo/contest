#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回
// long long 用の pow (MAX ll 9,223,372,036,854,775,807 -> 19桁)

// 2のk乗　-> 1 << k

// https://atcoder.jp/contests/apg4b/tasks/APG4b_ac

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N) cin >> A.at(i);

    bool ans = false;

    for (int tmp = 0; tmp < (1 << 20); tmp++) {
        bitset<20> s(tmp);

        int sum = 0;
        for (int i = 0; i < N; i++) {
            if(s.test(i)) {
                sum += A.at(i);
            }
        }
        if(sum == K) {
            ans = true;
        }
    }

    if(ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
