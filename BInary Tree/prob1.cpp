#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> c(n), d(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }

        int max_c = *max_element(c.begin(), c.end());
        int max_d = *max_element(d.begin(), d.end());

        long long ans = (long long) max_c * max_d;

        for (int i = 0; i < n; i++) {
            int temp_c = c[i];
            int temp_d = d[i];

            if (temp_c < max_c && temp_d < max_d) {
                long long new_ans = (long long) max(temp_c, max_c) * max(max_d, temp_d);
                ans = min(ans, new_ans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
