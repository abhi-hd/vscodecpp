#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n = 0;
    vector < vector< int > >  sizePosVectorPair ;
    vector < vector<int> > result;
    vector<vector<int> > groupThePeople(vector<int>& groupSizes) {
        n = groupSizes.size();
        sizePosVectorPair.resize(groupSizes.size() + 1);
        for(int i = 0; i < n; i++)
        {
            sizePosVectorPair[groupSizes[i]].push_back(i);
        }
        for(int i = 1; i < n+1; i++)
        {
            for(int j=0; j< sizePosVectorPair[i].size()/i; j++)
            {
                vector <int> temp;
                for (int k=0; k<i; k++)
                {
                    temp.push_back(sizePosVectorPair[i][j*i+k]);
                }result.push_back(temp);
            }
        }
        return result;
    }
};
int main()
{
    vector< int > query;
    query.push_back(2);
    query.push_back(1);
    query.push_back(3);
    query.push_back(3);
    query.push_back(3);
    query.push_back(2);
    Solution* sol = new Solution();
    vector < vector<int> > result = sol->groupThePeople(query);
    return 0;
}
