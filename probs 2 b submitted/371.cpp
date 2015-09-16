#include<iostream.h>
int main()
{
    long long count,n,max,a,b,i,j,c,d,num;
    while(cin>>a>>b && (a!=0 || b!=0))
    {
       max=0;
       c=a>b?a:b;
       d=a<b?a:b;
       for(j=d;j<=c;j++)
       {
           count=0;
           i=j;
           while(i!=1)
           {
               if(i%2!=0) i=3*i+1;
               else i=i/2;
               count++;
           }
           if(count>max) 
           {
               max=count;
               num=j;
           }
       }      
       cout<<"Between "<<d<<" and "<<c<<", "<<num<<" generates the longest sequence of "<<max<<" values.\n";
    }
    return 0;
}
