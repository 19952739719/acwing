// AcWing 3321. ATM队列  https://www.acwing.com/problem/content/3324/
/*
    目前该代码已通过测试样例。
    在输入之后，遍历整除X，然后利用sort函数直接排序进行输出，使用c++的sort中的自定义cmp
*/
#include<bits/stdc++.h>
using namespace std;

int n , x;
const int N = 100010;
struct node{
    int x;
    int y;
}q[N];

bool cmp(node a , node b){
    if(a.x < b.x)
        return true;
    else if(a.x == b.x)
        return a.y < b.y;
    else
        return false;
}

int main(){
    int t;
    cin >> t;
    for(int z = 1 ; z <= t ; z++){
        cin >> n >> x;
        for(int i = 1 ; i <= n ; i++){
            int a;
            cin >> a;
            q[i] = {(a+x-1)/x,i};
        }
        sort(q+1 , q+1+n , cmp);
        cout << "Case #";
        cout << z << ":";
        for(int i = 1 ; i <= n ; i++)
            cout << " " << q[i].y;
        cout << endl;
    }
    return 0;
}

// 以前的方法 存在队列超时且输出错误

// #include<stdio.h>
// #include<iostream>
// #include<queue>
// using namespace std;

// // 定义队列元素的结构体，由id(第几个人)和value(还需取多少钱)
// struct que
// {
//     int id;
//     int value;
// };

// int main(){
//     ios::sync_with_stdio(false);
//     queue<que> q;
//     // T组测试数据， N为人数，X为每次取的钱
//     int T, N, X, case0 = 1;
//     cin >> T;
//     que p;
//     for(int i = 0; i < T ; i++){
//         cin >> N >> X;
//         int A[N], res[N+1];
//         for(int j = 0; j < N; j++){
//             cin >> A[j];
//             p.id = j + 1;
//             p.value = A[j];
//             q.push(p);
//         }
//         int index = 1;
//         while (!q.empty())
//         {   
//             que node = q.front();
//             q.pop();
//             if (node.value <= X){
//                 res[index++] = node.id;
//             }
//             else{
//                 node.value -= X;
//                 q.push(node);
//             }
//         }
//         cout << "Case #" << case0++ << ": ";
//         for(int k = 1; k <= N; k++){
//             cout << res[k] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
      