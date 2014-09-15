#include <iostream>
#include <vector>
using namespace std;

void load(vector<int> &v)
{
    int n;
    
    for(int i = 0; i < 100; ++i)
    {
        cin >> n;
        v.push_back(n);
    }
}

void print(vector<int> &v)
{
    for(int i = 0; i < 100; ++i)
    {
        if(v[i] <= 10)
            cout << "A[" << i << "] = " << v[i] << endl;
    }
}

int main()
{
    vector<int> v;
    
    load(v);
    print(v);
    
    return 0;
}
