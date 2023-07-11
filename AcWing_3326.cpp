// AcWing 3326. 最大硬币数  https://www.acwing.com/problem/content/3329/
/*
    目前该代码已通过测试样例。
    时间限制是5s，所以肯定不会超时，就使用了很简单粗暴的循环遍历，时间复杂度可能比较高，单次就是O(n2)
    以一组数据为例的话
    (0,0) (0,1) (0,2)  ... (0,N-1)
    (1,0) (1,1) (1,2)  ... (1,N-1)
    .
    .
    .
    (N-1,0) (N-1,1) (N-1,2)  ... (N-1,N-1)
    j 从 0 到 N-1, k 从 0 到 N- j - 1， 将矩阵元素 相加到相应的 temp_res_v，temp_res_c变量中，然后取最大值与res比较
*/
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++){
        int N;
        cin >> N;
        int a[N][N];
        long long res = 0, temp_res_v = 0, temp_res_c = 0, temp_res;
        for(int j = 0; j < N; j++){
            for(int k = 0;k < N; k++){
                cin >> a[j][k];
            }
        }
        for(int j = 0; j < N; j++){
            temp_res_v = 0;
            temp_res_c = 0;
            for(int k = 0; k < N - j; k++){
                temp_res_v += a[k][k + j];
                temp_res_c += a[k + j][k];
            }
            temp_res = max(temp_res_c, temp_res_v);
            if(temp_res > res){
                res = temp_res;
            }
        }
        cout << "Case #" << i << ": " << res << "\n";
    }
}