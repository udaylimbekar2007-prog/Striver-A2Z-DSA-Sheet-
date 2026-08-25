/* You are given an integer n.
You need to check whether it is an armstrong number or not.
Return true if it is an armstrong number, otherwise return false. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		bool isArmstrong(int n) {
			int original = n;
			int num = 0;
			
			while(n>0){
				int digit = n%10;
				n = n/10;
				num = (num) + (digit*digit*digit);
			}
			if(num == original) return true;
			else return false;
		}
};

int main() {
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	bool result = solutions.isArmstrong(n);
	cout << result << endl;
	return 0;
}
