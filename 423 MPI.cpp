#include<iostream>
#include<queue>
int arr[101][101],start,dist[101],num1;
char color[101];
void dijk();
using namespace std;
typedef pair<int,int> vd;
int main()
{
    int num2,i,j,a,b,w,max,n;
    cin>>num1;
    char str[100];
    for(i=1;i<=num1;i++) dist[i]=9999;
    for(i=1;i<=num1;i++) for(j=1;j<=num1;j++) {arr[i][j]=-1;arr[i][i]=0;}
    for(i=2;i<=num1;i++)
    {
       for(j=1;j<i;j++)
       { 
          scanf("%s",str);
          if(strcmp(str,"x")==0) {arr[i][j]=-1;arr[j][i]=-1;}
          else 
          {  
            sscanf(str,"%d",&n);
            arr[i][j]=n;
            arr[j][i]=n;
          }
       }
    }
    start=1;
    dijk();
    max=dist[1];
    for(i=2;i<=num1;i++) if(dist[i]>=max) max=dist[i];
    cout<<max<<"\n";
    return 0;
}
void dijk()
{
     int flag,x,j,pos,i,val,p;
     priority_queue<vd,vector<vd>,greater<vd> > a;
     for(i=1;i<=num1;i++) color[i]='w';
     a.push(vd(0,start));
     dist[start]=0;
     while(!a.empty())
     {
        vd tops=a.top();
        x=tops.second;
        a.pop();
        if(color[x]!='b')
        {
          for(j=1;j<=num1;j++)
            if(arr[x][j]!=-1)
            {
               if(dist[j]>(dist[x]+arr[x][j])) {dist[j]=dist[x]+arr[x][j];}
               a.push(vd(dist[j],j));
            }
         color[x]='b';
        }
     }
}
