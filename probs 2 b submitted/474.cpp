#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
    long i,n;
    double a=log10(2),b,c,x,d;
    while(cin>>n)
    {
        b=a*(-n);
        c=modf(b,&d);
        x=int(pow(10.0,c)*10000+0.5)/1000.0;
        int p=b-1;
        printf("2^-%d = %0.3fe%d\n",n,x,p);
    }
    return 0;
}
