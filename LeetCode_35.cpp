// 力扣 35. 搜索插入位置  https://leetcode.cn/problems/search-insert-position/
/*
    目前该代码已通过测试样例。
    直接二分查找即可，找不到返回low
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int nums_len = nums.size();
        int low = 0, high = nums_len-1, mid;
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};