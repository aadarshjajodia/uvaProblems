#include <iostream>          //  Accepted
#include <math.h>
using namespace std;

int main()
{
    long double n, p;
    while(cin >> n >> p)  cout <<(long double)pow(10.0, ((long double)log10(p) / n)) << endl;
    return 0;
}
