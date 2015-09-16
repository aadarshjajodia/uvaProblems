#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long int i,no,n,d,in,a,b;
    cin>>in;
    for(i=0;i<in;i++)
    {
       cin>>a>>b;
       no=b-a;
       if(no==0) cout<<"0\n";
       else
       {
           if(no<0) no=-1*no;
           n=(long int)sqrt((double)no);
           d=no-(n*n);
           if(d%n==0) d=d/n;
           else d=d/n+1;
           cout<<2*n-1+d<<"\n";
       }
    }
    return 0;
}
