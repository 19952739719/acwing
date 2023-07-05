// AcWing 3325. Kick_Start  https://www.acwing.com/problem/content/3328/
#include <stdio.h>
#include <iostream>
#define N 100000
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        string S;
        cin >> S;
        int index0 = 0, index1 = 0, res = 0;
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
                j += 4
            }
        }
        cout << "Case #" << i << ": " << res << "\n";
    }
}