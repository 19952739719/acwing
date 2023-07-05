// AcWing 3325. Kick_Start  https://www.acwing.com/problem/content/3328/
/*
    目前该代码已通过全部测试样例
    新学了一个函数 string.substr(start, length)
    通过对测试样例的解析，不难发现 后面每出现一次start，之前出现过的kick 可以均计数一次，即 + num(kick)
    所以 通过对输入的字符串遍历即可，出现kick 就计数+1，出现一次start 结果增加目前kick出现次数
*/
#include <stdio.h>
#include <iostream>
#define N 100000
using namespace std;
int main()
{
    // 一共T组测试样例
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        string S;
        cin >> S;
        int index0 = 0, res = 0;
        for (int j = 0; j < S.length(); j++)
        {
            if (S.substr(j, 4) == "KICK")
            {
                index0++;
                j += 2;
            }
            else if (S.substr(j, 5) == "START")
            {
                res += index0;
                j += 4;
            }
        }
        cout << "Case #" << i << ": " << res << "\n";
    }
}