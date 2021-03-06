#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647 -> 10桁
// MAX ll 9,223,372,036,854,775,807 -> 19桁
// MAX O(n) 10^18 -> 18回

string f(ll n) {
    if (n == 0) return "";
    n--;
    return f(n/26) + string(1, 'a' + (n%26));
}

int main() {
    ll n;
    cin >> n;
    string ans;
    while(n) {
        n--;
        ans += 'a' + n % 26;
        n /= 26;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}
