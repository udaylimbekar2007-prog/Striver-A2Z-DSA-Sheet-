/*
Given an array nums of n integers, find the most frequent element in it i.e.,
the element that occurs the maximum number of times.
If there are multiple elements that appear a maximum number of times, find the smallest of them.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        for(int num : nums) {
            freq[num]++;
        }
        
        int maxFreq = 0;
        int maxElement = INT_MAX;
        
        for(auto& entry : freq) {
            int element = entry.first;
            int count = entry.second;
            
            if(count > maxFreq) {
                maxFreq = count;
                maxElement = element;
            }
            else if(count == maxFreq && element < maxElement) {
                maxElement = element;
            }
        }
        
        return maxElement;
    }
};

int main() {
    Solution solution;
    
    vector<int> nums = {1, 3, 2, 1, 4, 1, 3, 3, 3};
    
    int result = solution.mostFrequentElement(nums);
    
    cout << "Most frequent element: " << result << endl;
    
    return 0;
}
