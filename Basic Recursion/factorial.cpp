/* You are given an integer n. Return the value of n! or n factorial. */

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int printFact(int n){
			if(n==0){
				return 1;
			}
			else{
				return n*printFact(n-1);
			}
		}
};

int main(){
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int factorial = solutions.printFact(n);
	cout << "Factorial of the number entered is: " << factorial << endl;
	return 0;
}
