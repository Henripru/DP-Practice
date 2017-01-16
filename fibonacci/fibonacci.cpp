#include <iostream>
using namespace std;

int table[25];

int recurse(int N)
{
    if (table[N] == 0)
    {
        table[N] = recurse(N-1) + recurse(N-2);
    }
    return table[N];
}

int main()
{
    int N;
    table[0]=1;
    table[1]=1;
    cin >> N;
    cout << recurse(N);
    return 0;
}
