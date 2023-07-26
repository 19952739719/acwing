// 力扣 944. 删列造序  https://leetcode.cn/problems/delete-columns-to-make-sorted/
/*
    目前该代码已通过测试样例。
    与力扣1800、递增子字符串题目类似
*/
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int strs_len = strs.size(), str_len = strs[0].size();\
        int num = 0;
        for(int i = 0; i < str_len; i++){
            for(int j = 1;j < strs_len; j++){
                if(strs[j][i] >= strs[j-1][i])
                    continue;
                else
                    num++;
                    break;
            }
        }
        return num;
    }
};