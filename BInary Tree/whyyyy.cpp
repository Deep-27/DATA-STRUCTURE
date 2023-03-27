#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int min_max_product(vector<int> c, vector<int> d) {
    sort(c.rbegin(), c.rend()); // Sort array c in non-increasing order
    sort(d.begin(), d.end()); // Sort array d in non-decreasing order
    return c[0] * d[0]; // Return the product of the maximum values of the two arrays
}

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;

    vector<int> c(n), d(n);
    cout << "Enter the elements of array c: ";
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    cout << "Enter the elements of array d: ";
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    cout << "The minimum possible value of max(c1, c2, ..., cn) * max(d1, d2, ..., dn) is: ";
    cout << min_max_product(c, d) << endl;

    return 0;
}
