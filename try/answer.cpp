#define rep(i, n) for (int i = 0; i < (n); i++)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int MOD = 1000000007;
// MAX int 2,147,483,647
// MAX O(n) 10^18

int main() {
    pair<int, int> a(3, 1);
    pair<int, int> b(2, 10);

    if(a < b) {
        cout << "a < b" << endl;
    } else {
        cout << "b < a" << endl;
    }

    pair<int, int> c(5, 1);
    pair<int, int> d(5, 10);

    if(c < d) {
        cout << "c < d" << endl;
    } else {
        cout << "d < c" << endl;
    }
}
