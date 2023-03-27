#include <iostream>
using namespace std;

const int mod = 1e9+7;

int find_M(int N, int queries[], int Q) {
    int sum = 0;
    for(int i = 0; i < Q; i++) {
        int M = 0;
        int max_or = 0;
        int query = queries[i];
    
        for(int j = query; j < N; j++) {
            int curr_or = j | M;
            if(curr_or > max_or) {
                M = j;
                max_or = curr_or;
            }
        }
        sum = (sum + M) % mod;
    }
    return sum;
}

int main() {
    int N = 10;
    int queries[] = {1,2, 3,4,5};
    int Q = sizeof(queries)/sizeof(queries[0]);
    cout << find_M(N, queries, Q) << endl;
    return 0;
}
