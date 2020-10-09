#include <bits/stdc++.h>
#include <iostream>

#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

using namespace std;

class Vectors
{
    public: 

    vector<int> integerVector;
    vector< vector < int > > integerMatrix;
    bool is_nonempty_ok = !integerVector.empty();


    void modify_vector(vector< int >& v) 
    { 
        v[0]++;
    }
    void reverse_array(int *A, int N) 
    {
        int *first = A, *last = A+N-1;
        while(first < last) 
        {
            swap(*first, *last);
            first++;
            last--;
        }
    }
    template< typename T > void reverse_array(T *first, T *last) 
    {
        if(first != last) 
        {
            while(true) 
            {
                swap(*first, *last);
                first++;
                if(first == last) 
                {
                    break;
                }
                last--;
                if(first == last) 
                {
                    break;
                }
            }
        }
    }
    void vector_main()
    {
        int data[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
        vector< int > integerVector(data, data + sizeof(data)/sizeof(data[0]));

        //integerVector.insert(1, 42); // Insert value 42 after the first

        vector< int > v2(integerVector.rbegin(), integerVector.rend());
        vector< int > v3(integerVector);

        vector< int > sizeVector(20);
        sizeVector.resize(25);
        
        for(int i = 0; i < integerVector.size() ; i += 1) 
        {
            cout << integerVector[i] << " ";
        }
        cout << "\n";
        for(int i = 0; i < integerVector.size() ; i += 1) 
        {
            cout << v2[i] << " ";
        }
        cout << "\n";
        // for(int i = 0; i<1000000; i += 2)
        // {

        //     for(int j = 0; i<1000000; j += 2)
        //     {

        //     }
        // }
    }
};
class Pairs
{
    public: 
    pair<string, pair< int,int > > P;
    string s = P.first; // extract string
    int x = P.second.first; // extract first int
    int y = P.second.second; // extract second int
};
class Sets
{
    public:
    set< int > s;
    void set_main()
    {
        for(int i = 1; i <= 100; i++) 
        {
            s.insert(i); // Insert 100 elements, [1…100]
        }

        s.insert(42); // does nothing, 42 already exists in set

        for(int i = 2; i <= 100; i += 2) 
        {
            s.erase(i); // Erase even values
        }
    
        int n = int(s.size()); // n will be 50

        int r = 0;
        for(set< int >::const_iterator it = s.begin(); it != s.end(); it++) 
        {
            r += *it;
        }

        int total=0;
        tr(s, it)
        {
            total += *it;
        }

        cout << r << "\n";
        cout << total << "\n";
    }
};
int main()
{
    bool finishExecuting;

    Vectors v;
    v.vector_main();
    Sets s;
    s.set_main();
    cin >> finishExecuting;

    return 0;
}
