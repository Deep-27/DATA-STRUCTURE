

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> inputArr, answer;
	for(int i=0; i<n; ++i) {
		int temp;
		cin >> temp;
		inputArr.push_back(temp);
	}
	for(int i=0; i<n; ++i)
		if(inputArr[i]%2==0)
			answer.push_back(inputArr[i]);

	for(int i=0; i<n; ++i)
		if(inputArr[i]%2!=0)
			answer.push_back(inputArr[i]);

	for(int i=0; i<n; ++i)
		cout << answer[i] << " ";

	return 0;
}