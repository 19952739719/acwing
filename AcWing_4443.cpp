// AcWing 4443. 无限区域  https://www.acwing.com/problem/content/description/4446/
/*
    目前该代码已通过测试样例
    输入半径 A，B之后，直接while(R)，记录下 所有R * R 的和，要注意可能会超范围 所以用long long是最稳妥的。随后就是对R 的处理，难度不大

可优化点(?)
    写了下数学公式 发现其实就是 类似等比数列求和，但还没有写完
*/
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
double PI = 3.1415926535;

// m1
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        long R, A, B;
        double S;
        long long R2 = 0;
        cin >> R >> A >> B;
        R2 += R * R;
        while (R)
        {
            R *= A;
            R2 += R * R;
            R /= B;
            R2 += R * R;
        }
        S = R2*PI;
        printf("Case #%d: ", i);
        printf("%lf\n", S);
    }
    return 0;
}

// m2
// int main(){
//     int T;
//     cin >> T;
//     for(int i = 1; i <= T; i++){
//         long R, A, B;
//         double S;
//         long long RR = 0, R0 = 0;
//         cin >> R >> A >> B;
//         R0 = R * R;
//         int n = 0;
//         double rate = 1.0*A/B;
//         cout << rate << "\n";
//         double mul1 = 1.0*(1 + B*B) * rate;
//         cout << mul1 << "\n";
//         while (R)
//         {
//             R = (int)(R * rate);
//             cout << "R" << R << "\n";
//             n ++ ;
//         }
//         RR = R0*(1-pow(mul1, n))/(1-mul1);
//         S = RR * PI;
//         printf("Case #%d: ", i);
//         printf("%lf\n", S);
//     }
//     return 0;
// }
