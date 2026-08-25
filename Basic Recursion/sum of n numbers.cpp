/* Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int printSum(int n){
			if(n == 0){
				return 0;
			}
			else{
				cout << n << endl;
				return n + printSum(n-1);
			}
		}
};

int main(){
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int sum = solutions.printSum(n);
	cout <<"sum is: " << sum << endl;
	return 0;
}
