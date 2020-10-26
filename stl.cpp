#include <bits/stdc++.h>
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define sz(a) int((a).size())
#define pb push_back 
#define present(c,x) (©.find(x) != ©.end())
//#define cpresent(c,x) (find(all©,x) != ©.end())

typedef vector< int > vi;
typedef vector< vi > vvi;

using namespace std;

class Vectors
{
    public:
    vector<int> integerVector;
    vector< vector < int > > integerMatrix;
    bool is_nonempty_ok = !integerVector.empty();
    void print_vector(vector< int >& v)
    {
        for(int i = 0; i < v.size(); i++ )
        {
            cout<< v[i] <<" ";
        }
        cout<<"\n";
    }
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
        vector< int > newVector(data, data + sizeof(data)/sizeof(data[0]));
        this->integerVector = newVector;
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
class Maps
{
    public:
    map < string, int > m;
    Maps()
    {
        init_mapexample(m);
    }
    void init_mapexample(map<string, int> &m)
    {
        m.insert(pair<string, int>("Top", 40));
        m.insert(pair<string, int>("Coder", 80));
        m.insert(pair<string, int>("STL", 120));
        m["F#$%"] = 160;
        m["Text"] = 200;
        m["Formatiing"] = 240;
    }
    void print_map(map<string, int> &m)
    {
        tr(m, it)
        {
            cout<< it->first << " --- " << it->second << "\n";
        }        
    }
};
class StaticOps
{
    public:
    static void append_vector(vector < int > &v1, vector < int > &v2)
    {
        // Now copy v2 to the end of v1
        v1.resize(v1.size() + v2.size());
        // Ensure v1 have enough space
        copy(v2.begin(), v2.end(), v1.end() - v2.size());
        // Copy v2 elements right after v1 ones
    }
};
class Dfs
{
    public:
    int N; // number of vertices
    vvi W; // graph
    vector < bool > V; // V is a visited flag 

    void dfs_func(int i)
    {
        if(!V[i])
        {
            V[i] = true;
            for_each(W[i].begin(), W[i].end(), dfs_func);
        }
    }
    bool check_graph_connected_bfs() 
    {
        int start_vertex = 0;
        vi V(N, false);
        queue< int > Q;
        Q.push(start_vertex);
        V[start_vertex] = true;
        while(!Q.empty()) 
        {
            int i = Q.front();
            // get the tail element from queue
            Q.pop();
            tr(W[i], it) 
            {
                if(!V[*it]) 
                {
                    V[*it] = true;
                    Q.push(*it);
                }
            }
        }
        return NULL//(find(all(V), 0) == V.end());
    }
};
class Queues
{
    public:
    queue < int > q;
    Queues()
    {
        for(int i=0; 1<100; i++)
        {
            q.push(i*i);
            cout << q.back();
            q.pop();
        }
    }
};
int main()
{
    bool finishExecuting;

    Vectors v;
    v.vector_main();
    Sets s;
    s.set_main();
    Maps m;
    m.print_map(m.m);
    vector < int > vec = v.integerVector;
    StaticOps::append_vector(vec, v.integerVector);
    v.print_vector(vec);

    cin >> finishExecuting;
    return 0;
}
