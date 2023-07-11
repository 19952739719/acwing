// 力扣 LCP 77. 符文储备  https://leetcode.cn/problems/W2ZX4X/
/*
    目前该代码已通过测试样例。
    该题目比较简单，基础题，用sort对vector排序后，遍历判断即可，比前一项元素作差小于等于1，res++，否则res = 0
    并设置max_res 取最大的res。
*/
#include<algorithm>
#include<vector>
class Solution {
public:
    int runeReserve(vector<int>& runes) {
        sort(runes.begin(), runes.end());
        int runes_len = runes.size();
        int index = 0, res = 0, max_res = 0;
        for(int i = 1; i < runes_len; i++){
            if(runes[i] - runes[i - 1] <= 1){
                res++;

            }
            else{
                res = 0;
            }
            if(res > max_res)
                max_res = res;
        }
        return max_res + 1;
    }
};