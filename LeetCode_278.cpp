// 力扣 278. 第一个错误的版本  https://leetcode.cn/problems/first-bad-version/
/*
    目前该代码已通过测试样例。
    本题看到之后想到的是二分查找，但需要变一下，去找false和true相邻的那个点，可能是true 可能是false，最后判断一下即可
*/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long low = 1, high = n, mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(isBadVersion(mid))
                high = mid - 1;
            else
                low = mid + 1;
        }
        if(isBadVersion(mid))
            return mid;
        else
            return mid + 1;
    }
};