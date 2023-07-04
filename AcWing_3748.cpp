// AcWing 3748. 递增子串  https://www.acwing.com/problem/content/3751/
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