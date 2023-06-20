#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int queryType;
        cin >> queryType;

        if (queryType == 1)
        {
            int L, R;
            cin >> L >> R;

            vector<int> subarray(A.begin() + L - 1, A.begin() + R);
            sort(subarray.begin(), subarray.end(), greater<int>());

            int sum = subarray[0] + subarray[1];
            cout << sum << endl;
        }
        else if (queryType == 2)
        {
            int I, V;
            cin >> I >> V;

            A[I - 1] = V;
        }
    }

    return 0;
}
