#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		int fib(int n){
			if(n<=1){
				return n;
			}
			else{
				int prev = fib(n-1);
				int preprev = fib(n-2);
				return fib(n-1)+fib(n-2);
			}
		}
};

int main(){
	Solution solutions;
	int n;
	cout << "enter a number: ";
	cin >> n;
	int fibonnaci = solutions.fib(n);
	cout << fibonnaci << endl;
	return 0;
}
