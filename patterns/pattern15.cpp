/* Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

ABCDE
ABCD
ABC
AB
A

Print the pattern in the function given to you. */

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void pattern15(int n){
			for(int i = 0; i < n; i++) {
				for(char j = 'A'; j <= 'A'+ (n-i-1); j++) {
					cout << j;
				}
				cout << endl;
			}
		}
};

int main() {
	Solution solutions;
	int n;
	cout << "enter the value of n:";
	cin >> n;
	solutions.pattern15(n);
	return 0;
}
