// Problem: 350. Intersection of Two Arrays II

// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2,2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.
 

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000
 

 // Approach:
//  1: Create a map, and use the frequency count for getting the intersection
// T.C: O(m+n);
// S.C: O(min(m,n));
//  2: Use 2 pointer approach.
// T.C: O(mlogm + nlogn)
// S.C: O(1)


// 1:
#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        map<int,int> mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]++;
        }

        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]]!=0){
                res.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }

        return res;

}

// 2:
vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size(),n=nums2.size();
        int i=0,j=0,k=0;
        while(i<m and j<n){
            if(nums1[i]==nums2[j]){
                nums1[k]=nums1[i];
                i++;
                k++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                i++;
            }
        }
        vector<int> sub_vector(nums1.begin(), nums1.begin() + k);
        return sub_vector;
    }