// AcWing 4443. 无限区域  https://www.acwing.com/problem/content/description/4446/
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
