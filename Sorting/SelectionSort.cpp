/* Given an array of integers nums,
sort the array in non-decreasing order using the selection sort algorithm and 
return the sorted array. */

#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		vector<int> selectSort(vector<int>& nums){
			int n = nums.size();
			for(int i=0; i<n; i++){
				int minIndex = i;
				for(int j=0; j<n; j++){
					if(nums[j]>nums[minIndex]){
						swap(nums[j], nums[minIndex]);
					}
				}
			}
			return nums;
		}
};

int main(){
	Solution solutions;
	vector<int> nums = {64, 25, 12, 22, 11};
	vector<int> sortedNums = solutions.selectSort(nums);
	cout << "Sorted Array: ";
	for(int num: sortedNums){
		cout << num << " ";
	}
	cout << endl;
	
	return 0;
}
