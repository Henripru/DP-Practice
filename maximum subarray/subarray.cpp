#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N, V[25], cMax=0, gMax=0;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> V[i];
    }
    
    cMax = gMax = V[0];
    for(int i=1; i<N-1; i++)
    {
        cMax = max(V[i], cMax + V[i]);
        gMax = max(gMax, cMax);
    }
    cout << gMax << endl;
}
