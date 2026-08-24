/* Given an integer n.You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

E 
D E 
C D E 
B C D E 
A B C D E

Print the pattern in the function given to you. */

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void pattern18(int n) {
			for(int i = 0; i < n; i++) {
				for(char j = 'E'- i; j <= 'E'; j++) {
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
	solutions.pattern18(n);
	return 0;
}
