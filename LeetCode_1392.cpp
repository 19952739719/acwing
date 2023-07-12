// 力扣 1392. 最长快乐前缀  https://leetcode.cn/problems/longest-happy-prefix/
/*
    目前该代码已通过测试样例。
    解法有点暴力，一开始直接用的s，会报超出内存，用string_view后就没问题了。速度应该是最慢的
*/
// 由长到短
class Solution {
public:
    string longestPrefix(string s) {
        int s_len = s.length(), i = 0, j = 0;
        string_view p = s;
        for(i = 1; i <= s_len - 1;i ++){
            // cout << s.substr(0, s_len - i) <<" " <<s.substr(i, s_len - i)<<"\n";
            if(p.substr(0, s_len - i) == p.substr(i, s_len - i))
                return s.substr(0, s_len - i);
        }
        return "";
    }
};

/*
// 由短到长
class Solution {
public:
    string longestPrefix(string s) {
        int s_len = s.length(), i = 0, j = 0, index = -1;
        string_view p = s;
        for(i = 1; i <= s_len - 1;i ++){
            if(p.substr(0, i) == p.substr(s_len - i, i))
                index = i;
        }
        if(index != -1)
            return s.substr(0,index);
        return "";
    }
};
*/