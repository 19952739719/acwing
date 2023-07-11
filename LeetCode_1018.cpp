// 力扣 1018. 可被 5 整除的二进制前缀  https://leetcode.cn/problems/binary-prefix-divisible-by-5/
/*
    目前该代码已通过测试样例。
    该题目比较简单，基础题，遍历数组nums，然后每次num * 2并加nums[i]，如果num被5整除，num归0
*/
#include<bits/stdc++.h>
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        int index = 0;
        unsigned long num = 0;
        for(int i = 0; i < nums.size(); i++){
            num *= 2;
            num += nums[i];
            if(num % 5 == 0){
                res.push_back(1);
                num = 0;
            }
            else{
                res.push_back(0);
            }
        }
        return res;
    }
};
