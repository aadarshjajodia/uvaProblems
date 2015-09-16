#include<stdio.h>
#define MAX 1<<30
int m[100][100],p[100];
int main()
{
    int i,j,n,q,k,l,len,cuts;
    while(scanf("%d",&len) && len!=0)
    {
        for(i=0;i<100;i++) 
           for(j=0;j<100;j++) 
              m[i][j]=0;
        scanf("%d",&cuts);
        for(i=0;i<cuts;i++)
            scanf("%d",&p[i+2]);
        p[1]=0;
        p[cuts+2]=len;
        for(l=3;l<=cuts+2;l++)
        {
            for(i=1;i<=cuts-l+3;i++)
            {
                j=i+l-1;
                m[i][j]=MAX;
                for(k=i+1;k<j;k++)
                {
                  q=m[i][k]+m[k][j];
                  if(q<m[i][j]) m[i][j]=q;
                }
                m[i][j]+=p[j]-p[i];
            }
        }
        printf("The minimum cutting is %d.\n",m[1][cuts+2]);
    }
    return 0;
}
