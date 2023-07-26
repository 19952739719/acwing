// 力扣 1800. 最大升序子数组和  https://leetcode.cn/problems/maximum-ascending-subarray-sum/
/*
    目前该代码已通过测试样例。
    该题目与递增子字符串有点类似
*/
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int nums_len = nums.size();
        int temp_sum = nums[0], sum = nums[0];
        for(int i = 1; i < nums_len;i++){
            if(nums[i] > nums[i-1])
                temp_sum += nums[i];
            else {
                if(temp_sum > sum)
                    sum = temp_sum;
                temp_sum = nums[i];
            }
        }
        if(temp_sum > sum)
            return temp_sum;
        else
            return sum;
    }
};