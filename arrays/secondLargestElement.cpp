/* Given an array of integers nums, return the second-largest element in the array.
If the second-largest element does not exist, return -1. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int secondLargestElement(vector<int>& nums) {
			int n = nums.size();
			int largest = nums[0];
			int slargest= -1;
			for(int i = 0; i < n; i++) {
				if(nums[i] > largest) {
					slargest = largest;
					largest = nums[i];
				}
				else if(nums[i] < largest && nums[i] > slargest) {
					slargest = nums[i];
				}
			}
			return slargest;
		}
};

int main() {
    vector<int> nums = {3, 4, 2, 7, 9, 5, 9};   
    
    Solution s;
    int result = s.secondLargestElement(nums);
    
    cout << "Second Largest element: " << result << endl;
    
    return 0;
}
