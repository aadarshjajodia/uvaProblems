#include<stdio.h>
#define MAX 100000000
int main()
{
    unsigned long long int sum,i,j,m=0,x=0,t=4;
    sum=3;
    for(i=3;i<MAX;i++)
    {
           sum+=i;
           for(j=t+1;j<=sum;j++)
           {
              x=x+j;
              if(x>sum) {x=x-(i+2);t=j;break;}
              if(x==sum) {printf("%10ld",i+1);printf("%10ld",j);printf("\n");m++;x=x-(i+2);t=j;break;}
           }
           if(m==10) break;
    }
    return 0;
}
