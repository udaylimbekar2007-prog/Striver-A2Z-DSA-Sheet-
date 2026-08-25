/*You are given an integer n.
You need to check if the number is prime or not.
Return true if it is a prime number, otherwise return false. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true; 
    }
};

int main() {
    Solution solutions;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    bool result = solutions.isPrime(n);
    
    cout << (result ? "true" : "false") << endl;
    
    return 0;
}
