#include<iostream>
#include<queue>
#define MAXV 200 
#define MAXDEGREE 200 
using namespace std;
int edges[MAXV+1][MAXDEGREE],*degree,*nodes,*abc,*bicolor;
void bfs(int);
int main()
{
    int k,flag1,i,num1,num2,c,j,a,b;
    while(cin>>num1 && num1!=0)
    {
       k=0;
       degree=(int*)malloc((num1+1)*sizeof(int));
       nodes=(int*)malloc((num1+1)*sizeof(int));
       abc=(int*)malloc((num1+1)*sizeof(int));
       bicolor=(int*)malloc((num1+1)*sizeof(int));
       for(i=0;i<=num1;i++) abc[i]=-1;
       for(i=0;i<num1;i++) degree[i]=0;
       cin>>num2;
       for(i=0;i<num2;i++)
       {
          cin>>a>>b;
          if(abc[a]==-1) {nodes[k]=a;abc[a]=k;k++;}
          if(abc[b]==-1) {nodes[k]=b;abc[b]=k;k++;}   
          edges[abc[a]][degree[abc[a]]++]=b;
          edges[abc[b]][degree[abc[b]]++]=a;
       }
       bfs(num1);
       for(i=0;i<num1;i++)
       {
         c=bicolor[nodes[i]];
         flag1=0;
         for(j=0;j<degree[i];j++) if(bicolor[edges[i][j]]==c) {flag1=1;break;}
         if(flag1==1) break;
       }
       if(flag1==1) cout<<"NOT BICOLORABLE.\n";
       else cout<<"BICOLORABLE.\n";
    }
    return 0;
}
void bfs(int ver)
{
     int flag,x,j,pos,i,col;
     char color[ver+1];
     queue<int> a;
     for(i=0;i<ver;i++) {color[nodes[i]]='w';bicolor[nodes[i]]=-1;}
     color[nodes[0]]='g';
     a.push(nodes[0]);
     bicolor[nodes[0]]=1;
     while(!a.empty())
     {
        x=a.front();
        pos=abc[x];
        flag=0;
        a.pop();
        col=bicolor[x]^1;
        for(j=0;j<degree[pos];j++)
        {
          if(color[edges[pos][j]]=='w')
          {
             if(bicolor[edges[pos][j]]==-1) bicolor[edges[pos][j]]=col;
             color[edges[pos][j]]='g';
             a.push(edges[pos][j]);
          }
        }
        color[x]='b';
     }
}
