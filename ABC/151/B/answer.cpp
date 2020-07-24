#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647
// MAX O(n) 10^18

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    vector<int> A(N - 1);
    rep(i, N - 1) cin >> A.at(i);

    int sum = 0;
    rep(i, N - 1) {
        sum += A.at(i);
    }

    int ans = -1;
    for (int i = 0; i <= K; i++) {
        if(i >= M * N - sum) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}
