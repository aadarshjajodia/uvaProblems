#include<iostream.h>
#define MAX 100
int arr[MAX][MAX],m,n,k,r;
char arr2[MAX][MAX],str1[MAX],str2[MAX];
void printlcs(int,int);
int min(int,int,int);
int main()
{
    int i,j,c,x,y,z;
    while(gets(str1) && gets(str2))
    {
        k=0;
        r=1;
        m=strlen(str1);
        n=strlen(str2);
        for(i=0;i<=m;i++)
           for(j=0;j<=n;j++) 
              arr[i][j]=0;
        for(i=0;i<=m;i++) arr[i][0]=i;
        for(i=0;i<=n;i++) arr[0][i]=i;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
              if(str1[i-1]==str2[j-1]) c=0;
              else c=1;
              x=arr[i-1][j]+1;
              y=arr[i][j-1]+1;
              z=arr[i-1][j-1]+c;
              arr[i][j]=min(x,y,z);
              if(arr[i][j]==x) arr2[i][j]='^';
              else if(arr[i][j]==y) arr2[i][j]='<';
              else arr2[i][j]='*';
            }
        }
        for(i=1;i<=m;i++) arr2[i][0]='^';
        for(i=1;i<=n;i++) arr2[0][i]='<';
        cout<<arr[m][n]<<"\n";
        printlcs(m,n);

    }
    return 0;
}
int min(int x,int y,int z)
{
    if(x<y && x<z) return x;
    else if(y<z) return y;
    else return z;
}
void printlcs(int a,int b)
{
     if(a==0 && b==0) return;
     if(arr2[a][b]=='*')
     {
         printlcs(a-1,b-1);
         if(str1[a-1]!=str2[b-1]) cout<<r++<<" Replace "<<a+k<<","<<str2[b-1]<<"\n";
     }         
     else if(arr2[a][b]=='<') 
     {
         if(b>=1)
         {
             printlcs(a,b-1);
             k=k+1;
             cout<<r++<<" Insert "<<a+k<<","<<str2[b-1]<<"\n";
         }
         else
         {
             k=k+1;
             cout<<r++<<" Insert "<<a+k<<","<<str2[b-1]<<"\n";
         }
     }
     else 
     {
         if(a>=1 && b>=0) 
         {  
           printlcs(a-1,b);
           cout<<r++<<" Delete "<<a+k<<"\n";
           k=k-1;
         }
         else
         {
           cout<<r++<<" Delete "<<a+k<<"\n";
           k=k-1;
         }
     }
}
