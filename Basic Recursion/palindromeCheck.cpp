/* Given a string s, return true if the string is palindrome, otherwise false. Using Recursion. */

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		bool palindromeCheck(string& s, int i=0){
			if(i >= s.size()/2){
				return true;
			}
			if(s[i] != s[s.size()- i- 1]){
				return false;
			}
			else{
				return palindromeCheck(s, i+1);
			}
		}
};

int main(){
	Solution solutions;
	string s;
	cout << "Enter any string: ";
	cin >> s;
	bool check = solutions.palindromeCheck(s);
	cout << check << endl;
	return 0;
}
