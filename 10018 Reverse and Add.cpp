#include<iostream.h>
int main()
{
    unsigned long x,b,c,rev,copy;
    int i,a,count,rem;
    cin>>a;
    for(i=0;i<a;i++)
    {
          cin>>x;
          count=0;
          while(1)
          {
              rev=0;
              copy=x;
              while(copy>0)
              {
                        rem=copy%10;
                        rev=rev*10+rem;
                        copy=copy/10;
              }
              if(rev!=x) {x=x+rev;count++;}
              else if(rev==x) break;
          }
          cout<<count<<" "<<x<<"\n";
    }
    return 0;
}
