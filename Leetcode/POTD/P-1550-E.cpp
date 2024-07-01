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

#include <bits/stdc++.h>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(auto val:arr){
            if(val%2==1){
                count++;
                if(count>=3){
                    return 1;
                }
            }
            else{
                count=0;
            }
        }
        return 0;
}

int main(){
    vector<int> arr={1,2,34,3,4,5,7,23,12};
    cout<<threeConsecutiveOdds(arr);
    return 0;
}
