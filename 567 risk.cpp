#include<queue>
#include<iostream>
using namespace std;
int arr[21][21],dist[21][21],d[21],start,x;
char color[21];
void bfs();
int main()
{
    int num1,num2,i,j,count=1,test;
    while(cin>>num1)
    {
       for(i=1;i<=20;i++) for(j=1;j<=20;j++) {arr[i][j]=0;dist[i][j]=0;}
       for(i=0;i<num1;i++)
       {
          cin>>num2;
          arr[num2][1]=1;
          arr[1][num2]=1;
       }
       for(i=2;i<=19;i++)
       {
          cin>>num1;
          for(j=0;j<num1;j++)
          {
              cin>>num2;
              arr[num2][i]=1;
              arr[i][num2]=1;
          }
       }
       for(i=1;i<=20;i++)
       {
         start=i;
         bfs();
       }
       printf("Test Set #%d\n",count++);
       cin>>test;
       for(i=0;i<test;i++)
       {
         cin>>num1>>num2;
         printf("%2d to %2d:%2d\n",num1,num2,dist[num1][num2]);
       }
       printf("\n");
    }
    return 0;
}
void bfs()
{
     int i;
     queue<int> a;
     for(i=1;i<=20;i++) color[i]='w';
     color[start]='g';
     d[start]=0;
     a.push(start);
     while(!a.empty())
     {
        x=a.front();
        a.pop();
        for(i=1;i<=20;i++)
          if(arr[x][i] && color[i]=='w')
          {
             color[i]='g';
             d[i]=d[x]+1;
             a.push(i);
          }
        color[x]='b';
     }
     for(i=1;i<=20;i++) dist[start][i]=d[i];
}
