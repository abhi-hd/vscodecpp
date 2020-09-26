#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector< int > result; 
    int n;
    vector<int> decompressRLElist(vector<int>& nums) {
        n = nums.size();
        for(int i=0; i<n/2; i++)
        {
            for(int j=0; j<nums[2*i]; j++)
            {
                result.push_back(nums[2*i+1]);
            }
        }
        return result;
    }
};