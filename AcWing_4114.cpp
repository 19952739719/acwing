// AcWing 4114. 垃圾桶  https://www.acwing.com/problem/content/4117/
/*
    目前该代码已通过全部测试样例
    此题的结果可能会超范围，再就是可能会超时
    主要是 将有垃圾桶的房屋记录下来，利用二分查找寻找
    对于此题 二分查找时间复杂度可能也比较高
    输入完01字符串后，遍历并将房屋号记录在poi数组中，随后遍历字符串s
    如果s[j]是1，则继续；如果不是，进一步判断poi数组的有效长度，
    如果长度为1，则与唯一一个房屋计算距离并相加，
    如果不为1，进行二分查找，并计算最近的距离
*/
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;
        char s[N];
        int poi[N];
        int index = 0;
        long long res = 0;
        cin >> s;
        // 第一次遍历s，记录有垃圾桶的房屋号
        for (int j = 0; j < N; j++)
        {
            if (s[j] == '1')
                poi[index++] = j;
        }
        // 第二次遍历s，计算结果
        for (int j = 0; j < N; j++)
        {   
            // 如果有垃圾桶，距离为0，跳过继续
            if (s[j] == '1')
                continue;
            else
            {
                // 如果只有一个垃圾桶，直接计算与它的距离并相加
                if (index == 1)
                {
                    res += abs(poi[0] - j);
                }
                // 如果有多个垃圾桶，进行二分查找
                else
                {
                    int low = 0, high = index - 1, mid;
                    while (low <= high)
                    {
                        mid = (low + high) / 2;
                        if (j > poi[mid])
                            low = mid + 1;
                        else if (j < poi[mid])
                            high = mid - 1;
                    }
                    // 对于mid处于开头、中间、结尾三种情况分别进行计算 
                    if (mid == 0)
                        res += min(abs(poi[mid] - j), abs(poi[mid + 1] - j));
                    else if (mid == index - 1)
                        res += min(abs(poi[mid] - j), abs(poi[mid - 1] - j));
                    else
                        res += min(min(abs(poi[mid] - j), abs(poi[mid + 1] - j)), abs(poi[mid - 1] - j));
                }
            }
        }
        cout << "Case #" << i << ": " << res << "\n";
    }
}