#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int counter, result = 0;
    int balancedStringSplit(string s) {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'R')
            {
                counter++;
            }
            else if(s[i] == 'L')
            {
                counter--;
            }
            if(counter == 0) result++;
        }
        return result ;
    }
};