// 力扣 693. 交替位二进制数  https://leetcode.cn/problems/binary-number-with-alternating-bits/
/*
    目前该代码已通过测试样例。
    直接设置两个int型变量，用来存上一位和这一位的数值，一样就return false，如果n为0了 则表明为true。
*/
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int target = -1, temp_target = -2;
        while(n){
            temp_target = n % 2;
            if(temp_target == target)
                return false;
            else
                target = temp_target;
                n /= 2;
        }
        return 1;
    }
};