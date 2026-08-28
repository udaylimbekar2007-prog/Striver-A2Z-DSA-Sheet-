/*
Given an array nums of size n which may contain duplicate elements.

Rreturn a list of pairs where each pair contains a unique element from the array and its frequency
in the array.

You may return the result in any order, but each element must appear exactly once in the output.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		vector<vector<int>> countFrequencies(vector<int>& nums){
			unordered_map<int, int> freq;
			
			for(int num : nums){
				freq[num]++;
			}
			
			vector<vector<int>> result;
			for(auto& entry: freq){
				result.push_back({entry.first, entry.second});
			}
			return result;
		}
};

int main(){
	Solution solutions;
	
	vector<int> nums = {1, 2, 2, 3, 1, 4, 2, 1};
	
	vector<vector<int>> frequencies = solutions.countFrequencies(nums);
	
	cout << "Element: frequency" << endl;
	for(const auto& pair: frequencies){
		cout << pair[0] << " : " << pair[1] << endl;
	}
	return 0;
}
