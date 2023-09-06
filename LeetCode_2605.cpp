// 力扣 2605. 从两个数字数组里生成最小数字  https://leetcode.cn/problems/form-smallest-number-from-two-digit-arrays/
/*
    目前该代码已通过测试样例。
    分别遍历两个数组，每个数字对应num数组中的下标，出现则+1，同时分别记录两数组内的最小数字；
    如果num内有元素为2，则表明两数组内有重复数字，打印最小的重复数字即可；
    如果没有为2的元素，则将两数组内的最小数字组成最小数
*/
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int nums1_length = nums1.size(), nums2_length = nums2.size();
        int nums1_min = 10, nums2_min = 10;
        int num[10] = {0};
        for(int i = 0; i < nums1_length; i++){
            num[nums1[i]]++;
            if(nums1[i] < nums1_min){
                nums1_min = nums1[i];
            }
        }
        for(int j = 0; j < nums2_length; j ++){
            num[nums2[j]]++;
            if(nums2[j] < nums2_min){
                nums2_min = nums2[j];
            }
        }
        for(int i = 1; i <= 9;i ++){
            if(num[i] == 2){
                return i;
            }
        }
        if(nums1_min < nums2_min)
            return nums1_min * 10 + nums2_min;
        else
            return nums2_min * 10 + nums1_min;
        
    }
};