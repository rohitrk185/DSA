/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

/*
1)  Input: nums = [1,2,3,1]
    Output: true
2)  Input: nums = [1,2,3,4]
    Output: false
3)  Input: nums = [1,1,1,3,3,4,3,2,4,2]
    Output: true
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> umap;
    int numsSize = nums.size();
    for(int i = 0; i < numsSize; ++i) {
        if(umap[nums[i]]++ > 0) return true;
    }
    
    return false;
    
}