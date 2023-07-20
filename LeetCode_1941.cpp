// 力扣 1941. 检查是否所有字符出现次数相同  https://leetcode.cn/problems/check-if-all-characters-have-equal-number-of-occurrences/
/*
    目前该代码已通过测试样例。
    定义一个数组，存放字符串中26个英文字母出现次数，然后随后判断 是否相同。
*/
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int a[26] = {0}, s_len = s.size(), num = 0;
        for(int i = 0; i < s_len; i++){
            a[s[i] - 'a'] ++;
            num = a[s[i] - 'a'];
        }
        for(int i = 0; i < 26; i++){
            // cout << a[i] << "\n";
            if(a[i]){
                if(a[i] == num)
                    continue;
                else
                    return false;
            }
        }
        return true;
    }   
};