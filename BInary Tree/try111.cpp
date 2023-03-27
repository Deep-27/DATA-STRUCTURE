// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to print the elements
// of the matrix in row-wise manner
void printMatrix(vector<vector<int> > a)
{
	for (auto x : a) {
		for (auto y : x) {
			cout << y << " ";
		}
		cout << "\n";
	}
}

// Function to sort boundary elements
// of a matrix starting from theoutermost
// to the innermost boundary and place them
// in a clockwise manner
void sortBoundaryWise(vector<vector<int> > a)
{
	/* k - starting row index
		m - ending row index
		l - starting column index
		n - ending column index
		i - iterator
	*/
	int i, k = 0, l = 0;
	int m = a.size(), n = a[0].size();
	int n_i, n_k = 0, n_l = 0, n_m = m, n_n = n;

	while (k < m && l < n) {

		// Stores the current
		// boundary elements
		vector<int> boundary;

		// Push the first row
		for (i = l; i < n; ++i) {
			boundary.push_back(a[k][i]);
		}
		k++;

		// Push the last column
		for (i = k; i < m; ++i) {
			boundary.push_back(a[i][n - 1]);
		}
		n--;

		// Push the last row
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				boundary.push_back(a[m - 1][i]);
			}
			m--;
		}

		// Push the first column
		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				boundary.push_back(a[i][l]);
			}
			l++;
		}

		// Sort the boundary elements
		sort(boundary.begin(), boundary.end());
		int ind = 0;

		// Update the current boundary
		// with sorted elements

		// Update the first row
		for (i = n_l; i < n_n; ++i) {
			a[n_k][i] = boundary[ind++];
		}
		n_k++;

		// Update the last column
		for (i = n_k; i < n_m; ++i) {
			a[i][n_n - 1] = boundary[ind++];
		}
		n_n--;

		// Update the last row
		if (n_k < n_m) {
			for (i = n_n - 1; i >= n_l; --i) {
				a[n_m - 1][i] = boundary[ind++];
			}
			n_m--;
		}

		// Update the first column
		if (n_l < n_n) {
			for (i = n_m - 1; i >= n_k; --i) {
				a[i][n_l] = boundary[ind++];
			}
			n_l++;
		}
	}

	// Print the resultant matrix
	return  a;
}

// Driver Code

