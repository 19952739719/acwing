// 力扣 2073. 买票需要的时间  https://leetcode.cn/problems/time-needed-to-buy-tickets/
/*
    目前该代码已通过测试样例。
    通过模拟可知，在k之前的人，如果小于tickets[k]，则会离开队伍，而k之后的人，如果小于tickets[k]-1，则会离开队伍，那直接对tickets进行遍历判断即可
*/
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i;
        int target = tickets[k];
        int res = 0;
        for(i = 0; i < tickets.size(); i++){
            if(i <= k){
                res += min(tickets[i], target);
            }
            else if(i > k){
                res += min(tickets[i], target - 1);
            }
        }
        return res;
    }
};