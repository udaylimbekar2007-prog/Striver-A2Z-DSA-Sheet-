/* You are given an integer n.
Return the integer formed by placing the digits of n in reverse order. */

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int reverseNumber(int n) {
			int revnum = 0;
			while(n>0) {
				int digit = n%10;
				n = n/10;
				revnum = (10*revnum) + digit;
			}
			return revnum;
		}
};

int main() {
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int result = solutions.reverseNumber(n);
	cout << result << endl;
	return 0;
}
