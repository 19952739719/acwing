// 力扣 剑指 Offer II 112. 最长递增路径  https://leetcode.cn/problems/fpTFWP/
/*
    目前该代码已通过测试样例。
    该题目比较简单，可以转换为对图的dfs
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dfs(vector<vector<int>>& matrix, vector<vector<int>>& dp, int i, int j, int m, int n) {
    if (dp[i][j] != 0) {
        return dp[i][j];
    }
    
    int res = 1;
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    
    for (auto dir : directions) {
        int x = i + dir.first;
        int y = j + dir.second;
        
        if (x >= 0 && x < m && y >= 0 && y < n && matrix[x][y] > matrix[i][j]) {
            res = max(res, 1 + dfs(matrix, dp, x, y, m, n));
        }
    }
    
    dp[i][j] = res;
    return res;
}

int longestIncreasingPath(vector<vector<int>>& matrix) {
    if (matrix.empty()) {
        return 0;
    }
    
    int m = matrix.size();
    int n = matrix[0].size();
    int longestPath = 0;
    
    vector<vector<int>> dp(m, vector<int>(n, 0));
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            longestPath = max(longestPath, dfs(matrix, dp, i, j, m, n));
        }
    }
    
    return longestPath;
}

int main() {
    vector<vector<int>> matrix = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
    int longestPath = longestIncreasingPath(matrix);
    
    cout << "最长递增路径的长度为: " << longestPath << endl;
    
    return 0;
}