// 力扣 1748. 唯一元素的和  https://leetcode.cn/problems/sum-of-unique-elements/
/*
    目前该代码已通过测试样例。
    遍历nums数组，并记录每个数字出现的次数，随后遍历存放次数的数组，如果次数为1，则sum与该数相加
    同时添加num_sum 作为目前遍历过所有数字的次数，与nums长度相等时直接跳出循环
*/
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int num[101] = {0}, num_sum = 0;
        int sum = 0;
        int nums_len = nums.size();
        for(int i = 0;i < nums_len; i++)
            num[nums[i]] ++;
        for(int i = 1;i <= 100; i++){
            num_sum += num[i];
            // cout << num[i];
            if(num[i] == 1)
                sum += i;
            if(num_sum == nums_len)
                return sum;
        }
        return sum;
    }
};