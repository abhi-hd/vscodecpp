#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPartitions(string n) {
        int result = 1;
        int temp;
        for(int i = 0; i < n.length(); i++)
        {
            temp = (int)(n[i] - '0');
            if(temp > result)
            {
                result = temp;
            }
        }
        return result;
    }
};