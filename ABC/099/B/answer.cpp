#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = 1; i <= b - a; i++) {
        sum += i;
    }
    int ans = sum - b;

    cout << ans << endl;

    return 0;
}
