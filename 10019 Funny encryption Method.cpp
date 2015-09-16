#include<iostream.h>
#include<math.h>
int number(int);
int main()
{
    int x,num,count,copy1,rem;
    cin>>x;
    for(int i=0;i<x;i++)
    {
         cin>>num;copy1=0;
         int m=0;
         cout<<number(num);
         while(num>0) 
         {
                      rem=num%10;
                      copy1=copy1+pow(16,m++)*rem;
                      num/=10;
         }
         cout<<" "<<number(copy1)<<"\n";
    }
    return 0;
}
int number(int a)
{
    int count=0;
    while(a>0)
    {
              a=a & a-1;
              count++;
    }
    return count;
}
