/* You are given two integers n1 and n2.
You need find the Greatest Common Divisor (GCD) of the two given numbers.
Return the GCD of the two numbers. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int GCD(int a, int b) {
			while(a>0 && b>0) {
				if(a>b){
					a = a%b;
				}
				else{
					b = b%a;
				}
			}
			if(a == 0){
				return b;
			}
			else{
				return a;
			}
		}
};

int main() {
	Solution solutions;
	int a;
	int b;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	int result = solutions.GCD(a, b);
	cout << result << endl;
	return 0;
}
