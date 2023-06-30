// AcWing 4122. 字符串转换  https://www.acwing.com/problem/content/4125/
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int min(int a, int b, int c){
    int min;
    if (a <= b)
        min = a;
    else
        min = b;
    if (c <= min)
        return c;
    return min;
}

int binary_search(char a, string b, int length){
    int low = 0;
    int high = length - 1;
    int mid;
    int res = 1000;
    if (std::abs(a-b[0]) >= std::abs(a-b[high])) 
        res = std::abs(a-b[high]);
    else
        res = std::abs(a-b[0]);
    if (a < b[high] && std::abs(a - b[high] + 26) < res)
        res = std::abs(a - b[high] + 26);
    if (a < b[0] && std::abs(a - b[0] + 26) < res)
        res = std::abs(a - b[high] + 26);
    if (a > b[high] && std::abs(a - b[high] - 26) < res)
        res = std::abs(a - b[high] - 26);
    if (a > b[0] && std::abs(a - b[0] - 26) < res)
        res = std::abs(a - b[0] - 26);
    while(low <= high){
        mid = (low + high) / 2;
        if (a == b[mid])
        {
            return 0;
        }
        else if(a > b[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(mid != 0 && mid != length - 1){
        int label = min(std::abs(b[mid] - a), std::abs(b[mid-1] - a),std::abs(b[mid+1] - a));
        if(label < res)
            res = label;
    }
    return res;
}

int main(){
    int T;
    cin >> T;
    string S, F;
    
    for(int i = 0; i < T; i++){
        int res = 0;
        cin >> S;
        cin >> F;
        int s_len = S.length();
        int f_len = F.length();
        for(int j = 0; j < s_len; j ++){
            char a = S[j];
            int res_tmp = binary_search(a, F, f_len);
            res += res_tmp;
        }
        cout << "Case #" << i + 1 << ": " << res << "\n";
    }
}