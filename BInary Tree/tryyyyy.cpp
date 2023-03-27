#include <iostream>

using namespace std;

int countArithmeticMeans(int a[], int n);

int main() {
    int n;
  
    cin >> n;

    int a[n];
  
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = countArithmeticMeans(a, n);
    cout  << count << endl;
    return count;
}

int countArithmeticMeans(int a[], int n) {
    int count = 0;
    for(int i = 1; i < n - 1; i++) {
        if(a[i] == (a[i-1] + a[i+1]) / 2) {
            count++;
        }
    }
    if(n > 1 && a[0] == a[1] / 2) {
        count++;
    }
    if(n > 1 && a[n-1] == a[n-2] / 2) {
        count++;
    }
    return count;
}
