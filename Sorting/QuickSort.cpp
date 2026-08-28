/* Given an array of integers called nums,
sort the array in non-decreasing order using the quick sort algorithm and return the sorted array.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Sort(vector<int>& nums, int low, int high) {
        int pivot = nums[low];
        int i = low; 
        int j = high;

        while (i < j) {
            while (nums[i] <= pivot && i <= high - 1) {
                i++;
            }
            while (nums[j] > pivot && j >= low + 1) {
                j--;
            }
            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[low], nums[j]);
        return j;
    }

    void quickSortHelper(vector<int>& nums, int low, int high) {
        if (low < high) {
            int pIndex = Sort(nums, low, high);
            quickSortHelper(nums, low, pIndex - 1);
            quickSortHelper(nums, pIndex + 1, high);
        }
    }

    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return nums;
        quickSortHelper(nums, 0, n - 1);
        return nums;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {4, 6, 2, 5, 7, 9, 1, 3};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sortedNums = solver.quickSort(nums);

    cout << "Sorted array:   ";
    for (int num : sortedNums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
