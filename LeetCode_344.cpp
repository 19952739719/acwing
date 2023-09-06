// 力扣 344. 反转字符串  https://leetcode.cn/problems/reverse-string/
/*
    目前该代码已通过测试样例。
    c++ 直接循环交换即可
    c语言，有两种做法，一种是定义一个char型temp_s，然后取s+i存放的字符内容进行交换
                     另一种是定义一个int型变量，直接取字符的ASCII码，然后再赋值给对应位置的元素
*/


// c++
class Solution {
public:
    void reverseString(vector<char>& s) {
        int s_len = s.size();
        char temp_s;
        for(int i = 0; i < s_len/2; i++){
            temp_s = s[i];
            s[i] = s[s_len-1-i];
            s[s_len-1-i] = temp_s;
        }
    }
};


//c
void reverseString(char* s, int sSize){
        char temp_s;
        for(int i = 0; i < sSize/2; i++){
            temp_s = *(s+i);
            *(s+i) = *(s+sSize-1-i);
            *(s+sSize-1-i) = temp_s;
        }
    }