// AcWing 3748. 递增子串  https://www.acwing.com/problem/content/3751/
/*
    目前该代码已通过测试样例，使用字符型数组 char[] 和字符串 string 都可以完成，本代码用的是 char[]
    在输入完字符串后，遍历并记录此时的字符是否大于前一字符，大于的话，在label 数组中记为1，否则为0
    随后  遍历label 数组， 如果为1，num + 1；如果为0， num重置为1。
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        char S[N];
        int label[N];
        // 输入字符串的同时 将两字符进行比较 并记 1 或 0， 这里也可以直接用num开始计数，令num = 1； S[j] > S[j - 1] ,num + 1;否则 ,num  = 1;
        for (int j = 0; j < N; j++)
        {
            cin >> S[j];
            if (j == 0)
            {
                label[j] = 1;
                continue;
            }
            if (S[j] > S[j - 1])
            {
                label[j] = 1;
            }
            else
                label[j] = 0;
        }
        int num = 1;
        cout << "Case #" << i+1 << ": 1";
        for (int j = 1; j < N; j++)
        {
            if (label[j] == 1)
            {
                num++;
            }
            else
            {
                num = 1;
            }
            cout << " " << num;
        }
        cout << "\n";
    }
}