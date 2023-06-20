#include <bits/stdc++.h>

using namespace std;

int maximumUtilization(vector<int> &costs, int budget)
{
    int n = costs.size();

    // Calculate the prefix sums
    vector<int> prefixSum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        prefixSum[i + 1] = prefixSum[i] + costs[i];
    }

    int maxUtilization = 0;
    for (int i = 0; i < n; i++)
    {
        // Use binary search to find the rightmost index j such that prefixSum[j] - prefixSum[i] <= budget
        int low = i, high = n;
        while (low < high)
        {
            int mid = low + (high - low + 1) / 2;
            if (prefixSum[mid] - prefixSum[i] <= budget)
            {
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }

        maxUtilization = max(maxUtilization, prefixSum[low] - prefixSum[i]);
    }

    return maxUtilization;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, B;
        cin >> N >> B;

        vector<int> costs(N);

        for (int i = 0; i < N; i++)
        {
            cin >> costs[i];
        }

        int result = maximumUtilization(costs, B);
        cout << result << endl;
    }

    return 0;
}
