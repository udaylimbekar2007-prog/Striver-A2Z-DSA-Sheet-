#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  void pattern1(int n) {
    for(int i = 0; i< n; i++) {
      for(int j = 0; j < n; j++) {
        cout << "* ";
      }
      cout << endl;
    }
  }
};

int main() {
  int n;
  Solution solution;
  cout << "Enter the value of n : ";
  cin >> n;
  solution.pattern1(n);
  return 0;
}