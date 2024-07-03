// Problem: Minimum Difference Between Largest and Smallest Values in Three Moves

// You are given an integer array nums.

// In one move, you can choose one element of nums and change it to any value.

// Return the minimum difference between the largest and smallest value of nums after performing at most three moves.

// Example 1:

// Input: nums = [5,3,2,4]
// Output: 0
// Explanation: We can make at most 3 moves.
// In the first move, change 2 to 3. nums becomes [5,3,3,4].
// In the second move, change 4 to 3. nums becomes [5,3,3,3].
// In the third move, change 5 to 3. nums becomes [3,3,3,3].
// After performing 3 moves, the difference between the minimum and maximum is 3 - 3 = 0.
// Example 2:

// Input: nums = [1,5,0,10,14]
// Output: 1
// Explanation: We can make at most 3 moves.
// In the first move, change 5 to 0. nums becomes [1,0,0,10,14].
// In the second move, change 10 to 0. nums becomes [1,0,0,0,14].
// In the third move, change 14 to 1. nums becomes [1,0,0,0,1].
// After performing 3 moves, the difference between the minimum and maximum is 1 - 0 = 1.
// It can be shown that there is no way to make the difference 0 in 3 moves.
// Example 3:

// Input: nums = [3,100,20]
// Output: 0
// Explanation: We can make at most 3 moves.
// In the first move, change 100 to 7. nums becomes [3,7,20].
// In the second move, change 20 to 7. nums becomes [3,7,7].
// In the third move, change 3 to 7. nums becomes [7,7,7].
// After performing 3 moves, the difference between the minimum and maximum is 7 - 7 = 0.
 

// Constraints:

// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109


// Approach:
//  first we will sort the array
//  the possible cases are changing
// 3 right
// 3 left
// 2 right and 1 left
// 2 left and 1 right
// after changing the minimum value of all is taken
// this can be found by taking the min value of these, [(n-4)-(0)],[(n-3)-(1)],[(n-2)-(2)]
// and return the answer
// try to write on paper to understand it better

// T.C: O(NlogN)
// S.C: O(1)

#include <bits/stdc++.h>
using namespace std;

int minDifference(vector<int>& nums) {
    if(nums.size()<=4){
        return 0;
    }
    sort(nums.begin(),nums.end());
    int ans=INT_MAX;
    for(int i=0;i<=3;i++){
        ans=min(ans,(nums[nums.size()-3+i-1]-nums[i]));
    }
    return ans;
}