#include<iostream.h>
#define MAX 1010
int c[MAX][MAX];
int main()
{
    int i,j,m=0,n=0,f=0,g=0;
    char str1[MAX],str2[MAX];
    while(cin>>str1 && cin>>str2)
    {
    m=strlen(str1);
    n=strlen(str2);
    for(i=0;i<=m;i++) c[i][0]=0;
    for(j=0;j<=n;j++) c[0][j]=0;
    for(i=1;i<=m;i++)
    {
         for(j=1;j<=n;j++)
         {
             if(str1[i-1]==str2[j-1]) c[i][j]=c[i-1][j-1]+1;
             else if(c[i-1][j]>=c[i][j-1]) c[i][j]=c[i-1][j];
             else c[i][j]=c[i][j-1];
         }
    } 
    cout<<c[m][n];
    cout<<"\n";
    }
    return 0;
}
