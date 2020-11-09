#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector < int > result;
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        for(int i = 0; i < nums.size(); i++ )
        {
            result.insert(result.begin() + index[i], nums[i] );
        }
        return result;
    }
};