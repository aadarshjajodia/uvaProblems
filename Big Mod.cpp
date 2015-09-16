#include<iostream>
#define square(x)(x*x)
using namespace std;
unsigned long long bigmod(unsigned long long a,unsigned long long b,unsigned long long c);
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<bigmod(a,b,c)<<"\n";
    return 0;
}
unsigned long long bigmod(unsigned long long a,unsigned long long b,unsigned long long c)
{
    if(b==0) return 1;
    else if(b%2==0) return (square(bigmod(a,b/2,c))% c);
    else return (((a%c)*bigmod(a,b-1,c))%c);
}
