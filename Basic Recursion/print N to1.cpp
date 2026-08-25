/*
Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

    1.You must not use any loops such as for, while, or do-while.
    2.The function should print each number on a separate line, in decreasing order from n to 1.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void printNumbers(int n){
			if(n<1){
				return;
			}
			else{
				cout << n << endl;
				printNumbers(n-1);
			}
		}
};

int main(){
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	solutions.printNumbers(n);
	return 0;
}

