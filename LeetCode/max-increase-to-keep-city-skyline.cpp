#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector < int > top,left;
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        top.resize(grid.size());
        left.resize(grid.size());
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(top[j]<grid[i][j]) top[j] = grid[i][j];
                if(left[i]<grid[i][j]) left[i] = grid[i][j];
            }
        }
        int result = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                result += max(0, min(top[j], left[i]) - grid[i][j]);
            }
        }
        return result;
    }
};
