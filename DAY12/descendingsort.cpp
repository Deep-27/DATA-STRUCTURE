 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    // Sorting in Ascending Order:
    sort(array, array+n);
    for(int i=0; i< n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    // Sorting in Descending Order:
    sort(array, array+n, greater<int>());

    for(int i=0; i< n; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
 