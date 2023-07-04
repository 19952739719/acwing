// AcWing 4118. 狗和猫  https://www.acwing.com/problem/content/4121/
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
        if (j == N)
            cout << "Case #" << i+1 << ": YES" << "\n";
    }
    return 0;
}