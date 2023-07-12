// 力扣 852. 山脉数组的峰顶索引  https://leetcode.cn/problems/peak-index-in-a-mountain-array/
/*
    目前该代码已通过测试样例。
    该题目比较简单，可以以二分查找为基础进行修改，因为题目保证输入是山脉数组，则 数据会呈先上升后下降的走势
    所以取mid 与mid-1 mid+1比较，mid-1 < mid <mid +1 说明还没打到峰顶，low = mid， mid - 1> mid > mid +1 说明已经过了峰顶，high = mid。
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int arr_len = arr.size();
        int low = 0, high = arr_len - 1;
        int mid;
        while(low < high){
            mid = (low + high) / 2;
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
                return mid;
            }
            else if(arr[mid] > arr[mid - 1]){
                low = mid;
            }
            else if(arr[mid] > arr[mid + 1]){
                high = mid;
            }
        }
        return mid;
    }
};