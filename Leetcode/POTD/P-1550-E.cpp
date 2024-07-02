// Problem: 1550: Three Consecutive odds 
// Question: 
// Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

// Example 1:

// Input: arr = [2,6,4,1]
// Output: false
// Explanation: There are no three consecutive odds.
// Example 2:

// Input: arr = [1,2,34,3,4,5,7,23,12]
// Output: true
// Explanation: [5,7,23] are three consecutive odds.
 

// Constraints:

// 1 <= arr.length <= 1000
// 1 <= arr[i] <= 1000

// Approach: Create a count variable, keep track of consecutive odds and return based on that.

// T.C: O(N)
// S.C: O(1)

#include <iostream>
#include <vector>

using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
    int count = 0;
    for (int val : arr) {
        if (val % 2 == 1) { // Check if the number is odd
            count++;
            if (count >= 3) {
                return true;
            }
        } else {
            count = 0; // Reset count if the number is even
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 34, 3, 4, 5, 7, 23, 12}; // Example input
    cout << (threeConsecutiveOdds(arr) ? "true" : "false") << endl;
    return 0;
}
