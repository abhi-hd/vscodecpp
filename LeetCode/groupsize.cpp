#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n =0, nj=0;
    vector<int> count;
    vector<vector<int>> result; 
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        n = groupSizes.size();
        count.resize(n);
        for (int i=0; i<n; i++)
        {
            count[groupSizes[i]]++;
        }
        for (int i=0; i<n; i++)
        {
            if(count[i]!=0)
            {
                nj += count[i]/i;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(count[i]!=0)
            {
                
            }
        }
    }
};