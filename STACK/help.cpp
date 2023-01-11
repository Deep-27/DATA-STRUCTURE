// C++ program to implement
// the above approach
#include <iostream>
#include <stack>
using namespace std;

// Function to calculate
// score of parentheses
long long scoreOfParentheses(string S)
{

	stack<string> s;

	// Stores index of
	// character of string
	int i = 0;

	// Stores total scores
	// obtained from the string
	long long ans = 0;

	// Iterate over characters
	// of the string
	while (i < S.length()) {

		// If s[i] is '('
		if (S[i] == '(')
			s.push("(");
		else {

			// If top element of
			// stack is '('
			if (s.top() == "(") {
				s.pop();
				s.push("1");
			}
			else {

				// Stores score of
				// inner parentheses
				long long count = 0;

				// Calculate score of
				// inner parentheses
				while (s.top() != "(") {

					// Update count
					count += stoi(s.top());
					s.pop();
				}

				// Pop from stack
				s.pop();

				// Insert score of
				// inner parentheses
				s.push(to_string(2 * count));
			}
		}

		// Update i
		i++;
	}

	// Calculate score
	// of the string
	while (!s.empty()) {

		// Update ans
		ans += stoi(s.top());
		s.pop();
	}
	return ans;
}

// Driver Code
int main()
{
	string S1 = "";
    cin>>S1;
	cout << scoreOfParentheses(S1) << endl;

	return 0;
}
