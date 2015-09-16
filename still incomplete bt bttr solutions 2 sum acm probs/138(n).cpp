#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<cmath.h>
#define MAX 100000000
int main()
{
    unsigned long long int m=0,i,j,x=0,t=4,a,count;
    for(i=3;i<MAX;i++)
    {
       long long double n=8*(i*i)+(16*i)+9;
       count=0;
       cout<<"\n"<<n;
       while(n!=0)
       {
          n=n&n-1;
          count++;
       }
       cout<<" "<<i<<" "<<count;
       if(count==1)
       {
          a=((long long int)sqrt(n)-(2*i+3))/2+i+1;
          cout<<"\t"<<i+1<<" "<<a<<"\n";
       }
    }
    getch();
    return 0;
}
