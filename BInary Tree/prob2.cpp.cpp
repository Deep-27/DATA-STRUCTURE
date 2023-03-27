#include <iostream>
using namespace std;

int main() {
    long long l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;

    bool found = false;
    for (long long b = x; b <= y; ++b) {
        long long a = k * b;
        if (a >= l && a <= r) {
            found = true;
            break;
        }
    }

    if (found) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
