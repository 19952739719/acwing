// 力扣 2731. 移动机器人  https://leetcode.cn/problems/movement-of-robots/
/*
    目前该代码已通过测试样例。
    本题要先理解一下题意，机器人相撞时会改变方向，其实是可以看做没有改变继续移动的，所以只需要根据输入的方向和时间计算最终位置就好，再排序计算距离即可
*/
class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        int len1 = nums.size(), mod = 1000000007;
        long long sum_dis = 0;
        for(int i = 0; i < len1; i++){
            if(s[i] == 'R')
                nums[i] += d;
            else
                nums[i] -= d;
        }
        sort(nums.begin(), nums.end());
        long ans = 0, sum = 0, cnt = 0, now;
        for(int i = 0; i < len1; i++){
            now = sum - cnt * nums[i];
            ans = (ans + now) % mod;
            sum += nums[i];
            cnt++;
        }
        return -ans % mod;
    }
};