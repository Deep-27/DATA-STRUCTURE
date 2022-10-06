
    // https://leetcode.com/problems/move-zeroes/

// Move Zeroes

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]



void moveZeroes(vector<int>& nums) {
    int i=0;
    for(int j=0; j<nums.size(); j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
    }

}