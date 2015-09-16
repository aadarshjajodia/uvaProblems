#include<iostream>
#include<queue>
#include<malloc.h>
int **arr,start,*bicolor;
char *color;
void bfs(int);
using namespace std;
int main()
{
    int flag1,num1,num2,i,j,a,b,c;
    while(cin>>num1 && num1!=0)
    {
        arr=(int**)malloc(num1*sizeof(int));
        for(i=0;i<num1;i++) arr[i]= (int*)malloc(num1*sizeof(int));
        cin>>num2;
        for(i=0;i<num1;i++) for(j=0;j<num1;j++) arr[i][j]=0;
        for(i=0;i<num2;i++)
        {
           cin>>a>>b;
           if(i==0) start=a;
           arr[a][b]=1;
           arr[b][a]=1;
        }
        bfs(num1);
        for(i=0;i<num1;i++)
        {
           c=bicolor[i];
           flag1=0;
           for(j=0;j<num1;j++) if(arr[i][j] && bicolor[j]==c) {flag1=1;break;}
           if(flag1==1) break;
        }
        if(flag1==1) cout<<"NOT BICOLORABLE.\n";
        else cout<<"BICOLORABLE.\n";
    }
    return 0;
}
void bfs(int ver)
{
     int col,flag,x,j,pos,i;
     color=(char*)malloc(ver*sizeof(char));
     bicolor=(int*)malloc(ver*sizeof(int));
     queue<int> a;
     for(i=0;i<ver;i++) {color[i]='w';bicolor[i]=-1;}
     color[start]='g';
     a.push(start);
     bicolor[start]=1;
     while(!a.empty())
     {
        x=a.front();
        a.pop();
        col=bicolor[x]^1;
        for(j=0;j<ver;j++)
          if(arr[x][j] && color[j]=='w')
          {
             if(bicolor[j]==-1) bicolor[j]=col;
             color[j]='g';
             a.push(j);
          }
        color[x]='b';
     }
}
