/* You are given an integer n. You need to check whether the number is a palindrome number or not.
Return true if it's a palindrome number, otherwise return false. */

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		bool isPalindrome(int n) {
			int original = n;
			int rev = 0;
			
			while(n>0) {
				int digit = n%10;
				n = n/10;
				rev = rev*10 + digit;
			}
			if(rev == original) {
				return true;
			}
			else {
				return false;
			}
		}
};

int main() {
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	bool result = solutions.isPalindrome(n);
	cout << result << endl;
	return 0;
}
