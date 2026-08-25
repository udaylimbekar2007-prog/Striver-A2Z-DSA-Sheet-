/* You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself. */

#include<bits/stdc++.h> 
using namespace std;

class Solution {
	public:
		int countDigit(int n) {
			if(n == 1) {
				return 1;
			}
			int count = 0;
			while(n>0) {
				int digit = n%10;
				count++;
				n = n/10;
			}
			return count;
		}
};

int main() {
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int result = solutions.countDigit(n);
	cout << result << endl;
	return 0;
}
