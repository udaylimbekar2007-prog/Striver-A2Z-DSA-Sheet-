/* Given an array of integers called nums,
sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.*/

#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		vector<int> bubbleSort(vector<int>& nums){
			int n = nums.size();
			for(int i=0; i<n; i++){
				for(int j=0; j<n-1; j++){
					if(nums[j]>nums[j+1]){
						swap(nums[j], nums[j+1]);
					}
				}
			}
			return nums;
		}
};

int main(){
	Solution solutions;
	vector<int> nums = {64, 25, 12, 22, 11};
	vector<int> sortedNums = solutions.bubbleSort(nums);
	cout << "Sorted Array: ";
	for(int num: sortedNums){
		cout << num << " ";
	}
	cout << endl;
	
	return 0;
}
