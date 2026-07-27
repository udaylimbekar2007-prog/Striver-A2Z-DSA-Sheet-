#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void pattern5(int n) {
			for(int i = 0; i < n; i++) {
				for(int j = 1; j <= n-i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}
};

int main() {
	int n;
	cout << "enter the value of n: ";
	cin >> n;
	Solution solutions;
	solutions.pattern5(n);
}
