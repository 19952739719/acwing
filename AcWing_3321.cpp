// AcWing 3321. ATM队列  https://www.acwing.com/problem/content/3324/
/*
存在问题：
    该代码目前还存在超时问题

目前完成：
    因为一个人取完钱之后出队，如果没有取完就去队伍最后重新排队，所以用队列完成该操作，队头出队，判断是否取完，未取完就进行入队操作、

待完成：
    也可以在输入之后，遍历整除X，然后利用sort函数直接排序进行输出，目前还不熟悉c++的sort中的自定义cmp
*/
#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

// 定义队列元素的结构体，由id(第几个人)和value(还需取多少钱)
struct que
{
    int id;
    int value;
};

int main(){
    queue<que> q;
    // T组测试数据， N为人数，X为每次取的钱
    int T, N, X, case0 = 1;
    cin >> T;
    que p;
    for(int i = 0; i < T ; i++){
        cin >> N >> X;
        int A[N], res[N+1];
        for(int j = 0; j < N; j++){
            cin >> A[j];
            p.id = j + 1;
            p.value = A[j];
            q.push(p);
        }
        index = 1;
        while (!q.empty())
        {   
            que node = q.front();
            q.pop();
            if (node.value <= X){
                res[node.id] = index++;
            }
            else{
                node.value -= X;
                cout << node.value << "\n";
                q.push(node);
            }
        }
        cout << "Case #" << case0++ << ": ";
        for(int k = 1; k <= N; k++){
            cout << res[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}
      