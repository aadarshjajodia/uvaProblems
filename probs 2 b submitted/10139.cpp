#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,k,i,s;
    bool flag;
    while(cin>>n>>k)
    {
        s=1;
        flag=0;
        for(i=n;i>=1;i--)
        {
          s=((s%k) * (i%k)) % k;
          if(s==0)
          {
             flag=1;
             break;
          }
        }
        if(flag == 1) cout<<k<<" divides "<<n<<"!\n";
        else cout<<k<<" does not divide "<<n<<"!\n";
    }
    return 0;
}
