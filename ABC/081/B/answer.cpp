#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) {
        cin >> A.at(i);
    }

    int ans = 0;
    while (true) {
        bool hasOdd = false;
        rep(i, N) {
            if (A.at(i) % 2 == 1) {
                hasOdd = true;
            }
        }

        if (hasOdd) break;
        
        rep(i, N) {
            A.at(i) /= 2;
        }
        ans++;
    }

    cout << ans << endl;

    return 0;
}
