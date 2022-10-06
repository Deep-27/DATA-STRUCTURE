#include <bits/stdc++.h>
using namespace std;
using std::min;
using std::max;

int firstMin(int array[], int n)
{
    int minni = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int min = min(min, array[i]);
    }
    return min;
}


int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int minni = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        minni = min(minni, array[i]);
    }
    // cout <<  minni << endl;
    cout << firstMin(array, n) << endl;
    // cout << secondMin(array, n) << endl;
    return 0;
}