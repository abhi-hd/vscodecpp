#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int numberOfMatches(int n) {
        return numberOfMatchesRecursive(n);
    }

    int numberOfMatchesRecursive(int n)
    {
        if(n==1)
        {
            return 0;
        }
        if(n % 2 == 0)
        {
            return n/2 + numberOfMatchesRecursive(n/2);
        }
        else
        {
            return (n+1)/2 + numberOfMatchesRecursive((n-1)/2);
        }
    }
};