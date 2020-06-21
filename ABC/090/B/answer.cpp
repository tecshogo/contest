#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int A, B;
    cin >> A >> B;

    int ans = 0;
    for (int i = A; i <= B; i++) {
        string iString = to_string(i);
        bool isOk = true;
        if (iString.at(0) != iString.at(4)) isOk = false;
        if (iString.at(1) != iString.at(3)) isOk = false;
        if (isOk) ans++;
    }

    cout << ans << endl;

    return 0;
}
