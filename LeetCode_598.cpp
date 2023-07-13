// 力扣 598. 范围求和 II  https://leetcode.cn/problems/range-addition-ii/
/*
    目前该代码已通过测试样例。
    通过演算可以看出，只要找出ops的元素中，ai，bi的最小值即可
*/
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int ai = m, bi = n;
        // int ai_temp, bi_temp;
        int ops_len = ops.size();
        for(int i = 0; i < ops_len; i++){
            ai = min(ai, ops[i][0]);
            bi = min(bi, ops[i][1]);
        }
        return ai * bi;
    }
};