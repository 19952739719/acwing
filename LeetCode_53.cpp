// 力扣 53. 最大子数组和  https://leetcode.cn/problems/maximum-subarray/
/*
    目前该代码已通过测试样例。
    这道题没有想到思路，看了题解，大概明白题解的思路了，但还是没有完全理解。
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int nums_len = nums.size();
        int sum = -10000, temp = 0;
        for(int i = 0; i< nums_len; i++){
            temp = max(temp + nums[i], nums[i]);
            sum = max(sum, temp);
        }
        return sum;
    }
};