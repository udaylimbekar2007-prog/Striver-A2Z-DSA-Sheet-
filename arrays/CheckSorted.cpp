/* Given an array nums of n integers,
return true if the array nums is sorted in non-decreasing order or else false. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		bool isSorted(vector<int>& nums) {
			int n = nums.size();
			for(int i = 0; i <= n-1; i++) {
				if(nums[i+1] < nums[i]) {
					return false;
				}
			}
			return true;
		}
};


int main() {
    vector<vector<int>> testCases = {
        {1, 2, 3, 4, 5},   // sorted
        {1, 3, 2, 4, 5},   // not sorted
        {5},                // single element
        {},                 // empty
        {2, 2, 2, 2}        // all equal (still non-decreasing)
    };
    
    Solution s;
    for(auto& nums : testCases) {
        cout << (s.isSorted(nums) ? "true" : "false") << endl;
    }
    
    return 0;
}

