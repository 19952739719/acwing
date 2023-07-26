// 力扣 1328. 破坏回文串  https://leetcode.cn/problems/break-a-palindrome/
/*
    目前该代码已通过测试样例。
    直接遍历回文串，找到第一个不是a的字符，把该位置的值换为a，然后判断是否为回文串，不是的话就返回该字符串；
    如果遍历完都是a，那就把最后一个字符变为b
*/
class Solution {
public:
    int judge(string s1){
        int s1_len = s1.size();
        for(int i = 0; i < s1_len/2;i++){
            if(s1[i] != s1[s1_len - i - 1])
                return 0;
        }
        return 1;
    }
    string breakPalindrome(string palindrome) {
        string str1 = palindrome;
        int str_len = palindrome.size();
        if(str_len <= 1){
            return "";
        }
        for(int i = 0;i < str_len; i++){
            str1 = palindrome;
            if(palindrome[i] != 'a'){
                str1[i] = 'a';
                if(!judge(str1))
                    return str1;
            }
        }
        palindrome[str_len-1] += 1;
        return palindrome;
    }
};