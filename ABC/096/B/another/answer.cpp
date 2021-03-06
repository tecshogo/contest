#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int maxValue = max(max(A, B), C);

    int leftSum = A + B + C - maxValue;

    int sum = maxValue * pow(2, K);

    int ans = leftSum + sum;

    cout << ans << endl;

    return 0;
}
