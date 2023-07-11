// 力扣 2108. 找出数组中的第一个回文字符串  https://leetcode.cn/problems/find-first-palindromic-string-in-the-array/
/*
    目前该代码已通过测试样例。
    该题目比较简单，基础题，遍历判断words里每个元素，判断是否为回文串，如果是，直接return该字符串，如果遍历完没有发现 返回空
*/
class Solution {
public:
    int judge(string word){
        int str_len = word.length();
        for(int i = 0; i < str_len / 2; i++){
            if(word[i] == word[str_len - i - 1])
                continue;
            else
                return 0;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        int str_len = words.size();
        string word;
        for(int i = 0; i < str_len; i++){
            word = words[i];
            if(judge(word))
                return word;
        }
        return "";
    }
};