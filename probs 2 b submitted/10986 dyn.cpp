#include<iostream>
#include<queue>
#define MAX 20001
#define LARGE 1<<30
int arr[MAX][MAX],start,num1,end;
long long dist[MAX];
char color[MAX];
void bfs();
using namespace std;
typedef pair<int,int> vd;
int main()
{
    unsigned int num2,i,j,a,b,w,count=1,test,l;
    cin>>test;
    for(l=0;l<test;l++)
    {
        cin>>num1>>num2>>start>>end;
        for(i=0;i<num1;i++) dist[i]=LARGE;
        for(i=0;i<num1;i++) for(j=0;j<num1;j++) arr[i][j]=-1;
        for(i=0;i<num2;i++)
        {
           cin>>a>>b>>w;
           arr[a][b]=arr[b][a]=w;
        }
        bfs();
        if(arr[start][end]!=-1) cout<<"Case #"<<count++<<": "<<dist[end]<<"\n";
        else cout<<"Case #"<<count++<<": unreachable\n";
    }
    return 0;
}
void bfs()
{
     unsigned int x,j,i,val;
     priority_queue<vd,vector<vd>,greater<vd> > a;
     for(i=0;i<num1;i++) color[i]='w';
     a.push(vd(0,start));
     dist[start]=0;
     while(!a.empty())
     {
        vd tops=a.top();
        x=tops.second;
        a.pop();
        if(color[end]=='b') break;
        {
           for(j=0;j<num1;j++)
           {
              if(arr[x][j]!=-1 && color[x]!='b')
              {
                 if(dist[j]>(dist[x]+arr[x][j])) dist[j]=dist[x]+arr[x][j];
                 a.push(vd(dist[j],j));
              }
           }
           color[x]='b';
	}
      }
}
