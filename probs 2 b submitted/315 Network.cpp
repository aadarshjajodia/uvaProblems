#include<stack>
#include<iostream>
void dfs(int);
bool graph[101][101];
int ans,n;
using namespace std;
int main()
{
    int k,i,j,a,b,count,node;
    while(cin>>n)
    {
       ans=0;
       for(i=1;i<=n;i++) for(j=1;j<=n;j++) graph[i][j]=0;
       while(cin>>t && t!=0)
       {
          string str;
          int numbers[64] = { 0 };
          int N = 0;
          while (getline(cin, str))
          {
             N = 0;
             stringstream in(str);
             while (in >> numbers[N]) 
             {  N++;
                if(numbers[0]!=0) graph[numbers[0]][numbers[N]]=graph[numbers[N]][numbers[0]]=1;
             }
             if(numbers[0]==0) break;
          }
       }
       cin>>node;
       dfs(node);
    }
    return 0;
}
void dfs(int node)
{
   int i,start,visit[100]={0},cnt;
   visit[node]=1;
   stack <int> s;
   s.push(node);
   while(!s.empty())
   {
      start=s.top();
      cnt=0;
      cout<<start<<" ";
      s.pop();
      for(i=1;i<=n;i++)
      {
          if(visit[i]==0 && graph[start][i] == 1)
          {
               visit[i]=1;
               s.push(i);
               cnt++;
          }
      }
      if(cnt>1) ans++;
   } 
}
