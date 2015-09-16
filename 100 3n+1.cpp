#include<iostream.h>
int main()
{
    long long count,n,max,a,b,i,j,c,d;
    while(cin>>a>>b)
    {
       max=0;
       c=a>b?a:b;
       d=a<b?a:b;
       for(j=d;j<=c;j++)
       {
           count=1;
           i=j;
           while(i!=1)
           {
               if(i%2!=0) i=3*i+1;
               else i=i/2;
               count++;
           }
           if(count>max) max=count;
       }      
       cout<<a<<" "<<b<<" "<<max<<"\n";
    }
    return 0;
}
