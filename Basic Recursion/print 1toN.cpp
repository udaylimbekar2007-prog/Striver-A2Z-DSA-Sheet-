/* 
Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

    1.You must not use any loops such as for, while, or do-while.
    2.The function should print each number on a separate line, in increasing order from 1 to n.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		void printNumbers(int n, int current = 1) {
			if(current>n){
				return;
			}
			else{
				cout << current << endl;
				return printNumbers(n, current+1);
			}
			
		}
};

int main(){
	Solution solutions;
	int current = 1;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	solutions.printNumbers(n, current);
}
