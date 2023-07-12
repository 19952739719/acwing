// 力扣 2540. 最小公共值  https://leetcode.cn/problems/minimum-common-value/
/*
    目前该代码已通过测试样例。时间复杂度O(nlogn)
    对一个数组进行循环遍历，每次循环时，对另一个数组进行二分查找。找到则返回该数值
*/
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int nums1_len = nums1.size();
        int nums2_len = nums2.size();
        int low, high, mid, num;
        for(int i = 0; i < nums1_len; i++){
            num = nums1[i];
            low = 0;
            high = nums2_len - 1;
            while(low <= high){
                mid = (low + high)/2;
                if(nums2[mid] == num)
                    return num;
                else if(nums2[mid] > num)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
};