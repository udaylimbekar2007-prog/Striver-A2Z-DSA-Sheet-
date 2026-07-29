/* Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:


12345

1234

123

12

1


Print the pattern in the function given to you. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void pattern6(int n) {
			for(int i = 0; i < n; i++) {
				for(int j = 1; j <= n-i; j++) {
					cout << j;
				}
				cout << endl;
			}
		}
};

int main() {
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	solutions.pattern6(n);
	return 0;
}
