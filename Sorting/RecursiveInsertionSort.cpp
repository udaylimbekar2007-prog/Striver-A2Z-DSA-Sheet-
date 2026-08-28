/* Given an array of integers nums,
sort the array in non-decreasing order using the recursive Insertion Sort algorithm,
and return the sorted array.

1.You must implement Insertion Sort using recursion only.
2.Do not use loops (like for or while) or built-in sorting functions (sort, Arrays.sort, etc.).
3.A sorted array in non-decreasing order is an array 
where each element is greater than or equal to all elements that come before it. */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertionSortHelper(vector<int>& nums, int i, int n) {
        if(i >= n) {
            return;
        }
        insert(nums, i);
        insertionSortHelper(nums, i+1, n);
    }

    void insert(vector<int>& nums, int j) {
        if(j <= 0) {
            return;
        }
        if(nums[j-1] > nums[j]) {
            swap(nums[j-1], nums[j]);
            insert(nums, j-1);
        }
    }

    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        insertionSortHelper(nums, 1, n);
        return nums;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {12, 11, 13, 5, 6};

    cout << "Original: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    vector<int> sortedNums = solver.insertionSort(nums);

    cout << "Sorted:   ";
    for (int num : sortedNums) cout << num << " ";
    cout << endl;

    return 0;
}
