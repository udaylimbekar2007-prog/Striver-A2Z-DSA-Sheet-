/* Given an array of integers nums, return the value of the largest element in the array */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int largest = nums[0];
        for(int i = 0; i < n; i++) {
            if(nums[i] > largest) {
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main() {
    vector<int> nums = {3, 7, 2, 9, 4};   
    
    Solution s;
    int result = s.largestElement(nums);
    
    cout << "Largest element: " << result << endl;
    
    return 0;
}
