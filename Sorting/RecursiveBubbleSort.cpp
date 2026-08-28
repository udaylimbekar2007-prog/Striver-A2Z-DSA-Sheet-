/* Given an array of integers nums,
sort the array in non-decreasing order using the recursive Bubble Sort algorithm,
and return the sorted array.

1.You must implement Bubble Sort using recursion only.
2.Do not use built-in sorting functions (sort, sorted, Arrays.sort, etc.).
3.A sorted array in non-decreasing order is an array 
where each element is greater than or equal to the previous one. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		void Sort(vector<int>& nums, int n, int j){
			if(j>=n-1){
				if(n<=1){
					return;
				}
				else{
					Sort(nums, n-1, 0);
				}
			}
			else{
				if(nums[j]>nums[j+1]){
					swap(nums[j], nums[j+1]);
				}
				Sort(nums, n, j+1);
			}
		}
		
		vector<int> bubbleSort(vector<int>& nums){
			int n = nums.size();
			Sort(nums, n, 0);
			return nums;
		}
};

int main() {
    Solution solver;
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sortedNums = solver.bubbleSort(nums);

    cout << "Sorted array: ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
