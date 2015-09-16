#include<string>
#include<map>
#include<malloc.h>
#include<queue>
#include<iostream>
using namespace std;
map <string,int> gr;
string arr[10][10],start,x;
char *color;
void bfs(int);
int main()
{
    int num1,num2,i,j,k;
    string a,b;
    while(cin>>num1 && num1!=0)
    {
        k=1;
        cin>>num2;
        for(i=1;i<=num1;i++) for(j=1;j<=num1;j++) arr[i][j]="";
        for(i=0;i<num2;i++)
        {
           cin>>a>>b;
           if(gr[a]==0){gr[a]=k;k++;}
           if(gr[b]==0){gr[b]=k;k++;}
           if(i==0) start=a;
           arr[gr[a]][gr[b]]=b;
           arr[gr[b]][gr[a]]=a;
        }
        bfs(num1);
        cout<<"\n";
    }
    return 0;
}
void bfs(int ver)
{
     int flag,j,pos,i;
     color=(char*)malloc((ver+1)*sizeof(char));
     queue<string> a;
     for(i=1;i<=ver;i++) color[i]='w';
     color[gr[start]]='g';
     a.push(start);
     cout<<start<<" ";
     while(!a.empty())
     {
        x=a.front();
        a.pop();
        for(j=1;j<=ver;j++)
          if(arr[gr[x]][j]!="" && color[j]=='w')
          {
             cout<<arr[gr[x]][j]<<" ";
             color[j]='g';
             a.push(arr[gr[x]][j]);
          }
        color[gr[x]]='b';
     }
}
