#include<iostream>
#define min(a,b,c) (((a<b) && (a<c))?a:b<c?b:c)
#define MAX 2147483647
int arr[15][102],sum[15][102],xpos,ypos,path[150],m,r,c;
void min2(int,int,int);
using namespace std;
int main()
{
    int i,j,ans,x,pos;
    while(cin>>r>>c)
    {
       m=0;
       xpos=0;
       for(i=0;i<150;i++) path[i]=-1;
       for(i=0;i<r;i++)
         for(j=0;j<c;j++)
           cin>>arr[i][j];
       for(i=0;i<r;i++) sum[i][c-1]=arr[i][c-1];
       for(i=c-2;i>=0;i--)
         for(j=r-1;j>=0;j--)
            sum[j][i]=min(sum[(j-1+r)%r][i+1],sum[j][i+1],sum[(j+1)%r][i+1])+arr[j][i];
       ans=sum[0][0];ypos=0;
       for(i=1;i<r;i++)
          if(sum[i][0]<ans) {ans=sum[i][0];xpos=i;}
       path[m++]=xpos+1;
       for(i=0;i<c-1;i++) min2(sum[(xpos-1+r)%r][ypos+1],sum[xpos][ypos+1],sum[(xpos+1)%r][ypos+1]);
       for(i=0;i<m;i++) if(i!=m-1) cout<<path[i]<<" ";
       else cout<<path[i];
       cout<<"\n"<<ans<<"\n";
    }
    return 0;
}
void min2(int x,int y,int z)
{
    int a,b,c,min;
    if(x<=y && x<=z) {a=(xpos-1+r)%r;min=x;}
    else if(y<=z) {b=xpos;min=y;}
    else {c=(xpos+1)%r;min=z;}
    if(x==min && y==min && z==min) xpos=min((xpos-1+r)%r,xpos,(xpos+1)%r);
    else if(x==min && y==min) xpos=min((xpos-1+r)%r,xpos,MAX);
    else if(y==min && z==min) xpos=min(MAX,xpos,(xpos+1)%r);
    else if(x==min && z==min) xpos=min((xpos-1+r)%r,MAX,(xpos+1)%r);
    else {if(x==min) xpos=a; else if(y==min) xpos=b; else xpos=c;}
    ypos++;
    path[m++]=xpos+1;
}
