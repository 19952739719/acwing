// AcWing 3321. ATM队列  https://www.acwing.com/problem/content/3324/
#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;

struct que
{
    int id;
    int value;
};

int main(){
    queue<que> q;
    int T, N, X, case0 = 1;
    cin >> T;
    que p;
    for(int i = 0; i < T ; i++){
        cin >> N >> X;
        int A[N], res[N+1], index = 1;
        for(int j = 0; j < N; j++){
            cin >> A[j];
            p.id = index++;
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
        for(int i = 1; i <= N; i++){
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
      