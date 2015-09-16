#include<iostream.h>
int main()
{
    int c[101][101],i,j,m,n,a[101],b[101],k=0;
    while(cin>>m>>n && (m|n)!=0)
    {   
       k++;
       for(i=0;i<m;i++)  cin>>a[i];
       for(i=0;i<n;i++)  cin>>b[i];
       for(i=0;i<=m;i++) c[i][0]=0;
       for(j=0;j<=n;j++) c[0][j]=0;
       for(i=1;i<=m;i++)
       {
         for(j=1;j<=n;j++)
         {
             if(a[i-1]==b[j-1]) {c[i][j]=c[i-1][j-1]+1;}
             else if(c[i-1][j]>=c[i][j-1]) c[i][j]=c[i-1][j];
             else c[i][j]=c[i][j-1];
         }
       } 
       cout<<"Twin Towers #"<<k<<"\n"<<"Number of Tiles : "<<c[m][n]<<"\n";
    }
    return 0;
}
