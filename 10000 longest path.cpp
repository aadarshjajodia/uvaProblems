#include<iostream>
#include<queue>
int arr[102][102],start,d[102],num1;
char color[102];
void bfs();
using namespace std;
int main()
{
    int i,j,a,b,max,t,cnt=1;
    while(cin>>num1 && num1!=0)
    {
        cin>>start;
        for(i=1;i<=num1;i++) for(j=1;j<=num1;j++) arr[i][j]=0;
        while(cin>>a>>b && a!=0 && b!=0) arr[a][b]=1;
        for(i=1;i<=num1;i++) d[i]=0;
        bfs();
        max=d[1];
        t=1;
        for(i=1;i<=num1;i++) if(i!=start && d[i]>max) {max=d[i];t=i;}
        cout<<"Case "<<cnt++<<": The longest path from "<<start<<" has length "<<max<<", finishing at "<<t<<".\n\n";
    }
    return 0;
}
void bfs()
{
     int m,x,i;
     queue<int> a;
     for(i=1;i<=num1;i++) color[i]='w';
     color[start]='g';
     a.push(start);
     while(!a.empty())
     {
        x=a.front();
        a.pop();
        for(i=1;i<=num1;i++)
        {
          if(arr[x][i])
          {
             m=d[x]+1;
             if(m>d[i]) {d[i]=m;a.push(i);}
          }
        }
     }
}
