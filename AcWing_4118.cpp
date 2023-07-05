// AcWing 4118. 狗和猫  https://www.acwing.com/problem/content/4121/
/*
    目前该代码已通过测试样例，对输入的字符串进行遍历，先判断是 猫 还是 狗 ，再判断是否还有粮食， 
    如果是猫 没有猫粮，就向后遍历查看是否有狗，有的话输出NO，没有的话输出YES
    如果是狗 没有狗粮，直接输出NO， 有的话，D--， C += M
    如果直到遍历完 仍没有在程序中途退出， 则输出YES
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
        long int N, D, C, M;
        cin >> N >> D >> C >> M;
        char S[N];
        for (int j = 0; j < N; j++)
        {
            cin >> S[j];
        }
        int j = 0;
        for (j; j < N; j++)
        {
            // 如果是猫，有猫粮 则C-- ，如果没有 从当前位置向后遍历， 查看是否有狗，有直接输出NO， 没有输出YES
            if (S[j] == 'C')
                if (C > 0)
                {
                    C--;
                }
                else{
                    int k = j;
                    while(k < N){
                        if (S[k] == 'D'){
                            cout << "Case #" << i+1 << ": NO" << "\n";
                            break;
                        }
                        else
                            k++;
                            continue;
                    }
                    if (k == N)
                        cout << "Case #" << i+1 << ": YES" << "\n";
                    break;
                }
            // 如果是狗，有狗粮， D-- C+=M，没有，直接输出NO
            if (S[j] == 'D') 
                if( D > 0)
                {
                    D--;
                    C += M;
                }
                else{
                    cout << "Case #" << i+1 << ": NO" << "\n";
                    break;
                }
        }
        // 如果遍历结束了，输出YES
        if (j == N)
            cout << "Case #" << i+1 << ": YES" << "\n";
    }
    return 0;
}