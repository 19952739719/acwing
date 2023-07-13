// 力扣 2529. 正整数和负整数的最大计数  https://leetcode.cn/problems/maximum-count-of-positive-integer-and-negative-integer/
/*
    目前该代码已通过测试样例。
    速度上是有些慢的，先用二分查找找0，如果没有找到0，表明这个数组可以直接从mid处分，如果有0，需要向左向右查找非0的两个位置。
    不过也可以尝试 双重二分查找
*/
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int nums_len = nums.size();
        int low = 0, high = nums_len - 1, mid, pos, neg;
        // 找0的位置
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] > 0){
                high = mid - 1;
            }
            else if(nums[mid] < 0){
                low = mid + 1;
            }
            else
                break;
        }
        // 说明没有0，除了大于0就是小于0
        if(nums[mid] > 0){
            neg = mid;
            pos = nums_len - mid;
        }
        else if(nums[mid] < 0){
            neg = mid + 1;
            pos = nums_len - mid - 1;
        }
        // 有0的情况
        else{
            int i;
            for(i = mid - 1; i >= 0; i--){
                if(nums[i] < 0)
                    break;
            }
            neg = i + 1;
            for(i = mid + 1; i < nums_len; i++){
                if(nums[i] > 0)
                    break;
            }
            pos = nums_len - i;
        }
        return max(pos, neg);
    }
};