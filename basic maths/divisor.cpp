/*You are given an integer n.
You need to find all the divisors of n. 
Return all the divisors of n as an array or list in a sorted order. */

#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		vector<int> divisors(int n) {
			vector<int> result;
			for(int i = 1; i <= n; i++) {
				if(n%i == 0){
					result.push_back(i);
				}
			}
			return result;
		}
};

int main () {
	Solution solutions;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	vector<int> results= solutions.divisors(n);
	cout << "Divisors: ";
	for(int i = 0; i < results.size(); i++) {
		cout << results[i] << " ";
	} 
	cout << endl;
	return 0;
}
