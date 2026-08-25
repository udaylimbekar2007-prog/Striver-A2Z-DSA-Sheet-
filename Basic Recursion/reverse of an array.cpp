/* Given an array arr of n elements.
   The task is to reverse the given array.
   The reversal of array should be inplace.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(int arr[], int n, int i = 0) {
        if (i >= n / 2) {
            return;
        }
		else{
			swap(arr[i], arr[n - i - 1]);
        	reverseArray(arr, n, i + 1);
		}
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sol.reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
