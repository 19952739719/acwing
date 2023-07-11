// AcWing 4382. 快速打字  https://www.acwing.com/problem/content/4385/
/*
    目前该代码已通过测试样例。根据题意，可以转化为 在P中按顺序寻找I，在输入之后直接循环遍历P，有相同 则I[k++]，没有则继续
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        string I, P;
        cin >> I;
        cin >> P;
        int k = 0, I_len = I.length(), P_len = P.length(); //避免二次计算
        for (int j = 0; j < P_len; j++)
        {
            if (I[k] == P[j])
            {
                k++;
            }
            if (k >= I_len)
            {
                break;
            }
        }
        if (k >= I_len)
        {
            cout << "Case #" << i << ": " << P_len - k << "\n";
        }
        else
        {
            cout << "Case #" << i << ": IMPOSSIBLE" << "\n";
        }
    }
}