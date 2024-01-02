/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

/*
1)  Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]
    Explanation:
    rotate 1 steps to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]
2)  Input: nums = [-1,-100,3,99], k = 2
    Output: [3,99,-1,-100]
    Explanation: 
    rotate 1 steps to the right: [99,-1,-100,3]
    rotate 2 steps to the right: [3,99,-1,-100]
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotateHelper(vector<int>& nums, int start, int end) {
    for(; start < end; ++start, --end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
    }
}
  
//     void rotate(vector<int>& nums, int k) {
// // Step1 -> rotate entire array
// // Step2 -> rotate array from 0 to <k
// // Step3 -> rotate array from k to array length
//       int numsLength = nums.size();
      
//       if(k == numsLength) return;
      
//       if(k > numsLength) {
//         k %= numsLength;
//       }
      
//       // int l = 0, r = numsLength - 1;
//       // for(; l < r; ++l, --r) {
//       //   int temp = nums[l];
//       //   nums[l] = nums[r];
//       //   nums[r] = temp;
//       // }
//       rotateHelper(nums, 0, numsLength - 1);
      
//       // l = 0, r = k - 1;
//       // for(; l < r; ++l, --r) {
//       //   int temp = nums[l];
//       //   nums[l] = nums[r];
//       //   nums[r] = temp;
//       // }
//       rotateHelper(nums, 0, k - 1);
      
//       // l = k, r = numsLength - 1;
//       // for(; l < r; ++l, --r) {
//       //   int temp = nums[l];
//       //   nums[l] = nums[r];
//       //   nums[r] = temp;
//       // }
//       rotateHelper(nums, k, numsLength - 1);
//     }
void rotate(vector<int>& nums, int k) {
int size = nums.size();
vector<int> newNums(size, 0);
for(int i = 0;i < size; ++i) {
    newNums[(i + k) % size] = nums[i];
}

for(int i = 0; i < size; ++i) {
    nums[i] = newNums[i];
}
}