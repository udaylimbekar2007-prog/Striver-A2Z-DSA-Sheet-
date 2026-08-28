/* Given an array of integers called nums, sort the array in non-decreasing order 
using the insertion sort algorithm and return the sorted array. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		vector<int> insertionSort(vector<int>& nums){
			int n = nums.size();
			for(int i=0; i<n; i++){
				int j = i;
				while(j>0 && nums[j-1] > nums[j]){
					swap(nums[j-1], nums[j]);
					j--;
				}
			}
			return nums;
		}
};

int main(){
	Solution solutions;
	vector<int> nums = {64, 25, 12, 22, 11};
	vector<int> sortedNums = solutions.insertionSort(nums);
	cout << "Sorted Array: ";
	for(int num: sortedNums){
		cout << num << " ";
	}
	cout << endl;
	
	return 0;
}
