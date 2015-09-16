#include<iostream>
#include<cmath>
#include<queue>
#define MIN(a,b) (a<b?a:b)
#define MAX(a,b) (a>b?a:b)
int arr[102][102],start,num1,end;
float dist[102];
char color[102];
void bfs();
using namespace std;
int main()
{
    int num2,i,j,a,b,w,count=1,test;
    while(cin>>num1>>num2 && (num1!=0 | num2!=0))
    {
        for(i=1;i<=num1;i++) dist[i]=999999.0;
        for(i=1;i<=num1;i++) for(j=1;j<=num1;j++) arr[i][j]=-1;
        for(i=0;i<num2;i++)
        {
           cin>>a>>b>>w;
           arr[a][b]=arr[b][a]=w-1;
        }
        cin>>start>>end>>test;
        bfs();
        cout<<"Scenario #"<<count++<<"\nMinimum Number of Trips = "<<ceil(test/dist[end])<<"\n\n";
    }
    return 0;
}
void bfs()
{
     int x,j,i,val,ma,k,s;
     queue<int> a;
     for(i=1;i<=num1;i++) color[i]='w';
     color[start]='g';
     a.push(start);
     while(!a.empty())
     {
        x=a.front();
        a.pop();
        for(j=1;j<=num1;j++)
        {
          if(arr[x][j]!=-1 && color[j]=='w')
          {
             dist[j]=MIN(arr[x][j],dist[x]);
             color[j]='g';
             a.push(j);
          }
          if(arr[x][j]!=-1 && color[j]=='g')
          {
             ma=-1;
             for(k=1;k<=num1;k++)
             {
                if(arr[j][k]!=-1 && color[k]=='g') 
                {
                   s=MIN(arr[j][k],(int)dist[k]);
                   if(s>ma) ma=s;
                }
             }
             dist[j]=MAX((int)dist[j],ma);
          }
        }
        color[x]='b';
     }
}
