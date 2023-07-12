// 力扣 1785. 构成特定和需要添加的最少元素  https://leetcode.cn/problems/minimum-elements-to-add-to-form-a-given-sum/
/*
    目前该代码已通过测试样例。
    该题目整体难度不大，但是会遇到求和溢出的问题，然后计算差的绝对值，向上取整即可。
*/
class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        int nums_len = nums.size();
        long long sum = 0;
        for (auto x : nums) { //这里借鉴的官方代码，用accumulate一直溢出
            sum += x;
        }
        long long sub = abs(sum - goal);
        return (sub + limit - 1) / limit;
    }
};