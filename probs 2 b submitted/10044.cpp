#include<string>
#include<string.h>
#include<map>
#include<malloc.h>
#include<queue>
#include<iostream>
#define MAX 100
using namespace std;
string arr[MAX+1][MAX+1],start,x,y;
int k,*dist,f;
char *color;
void bfs(map<string,int>);
int main()
{
    int num1,i,j,test,l,p,n,m,q,ans;
    string a,b,s,str2[20],str3[20];
    char c,d,str[100];
    cin>>test;
    for(i=0;i<test;i++)
    {
        d='*';
        k=1;
        map <string,int> gr;
        for(j=1;j<=MAX;j++) for(l=1;l<=MAX;l++) arr[j][l]="";
        cin>>p>>n;
        //fflush(stdin);
        for(j=0;j<p;j++)
        {        
           gets(str);
	   //getline(cin,str);
	   cout<<str<<" ";
           s="";
           m=0;
           for(l=0;l<strlen(str);l++)
           {
             if(l!=0 && l!=1 && str[l-2]==':') break;
             if(l!=0 && ((str[l-1]=='.' && str[l]==',') || (str[l-1]=='.' && str[l]==':')))
             {
               l++;
               if(gr[s]==0)
               {
                   gr[s]=k;
                   if(s=="Erdos, P.") {f=k;y=s;}
                   k++;
               }
               str2[m++]=s;
               s="";
               continue;
             }
             s=s+str[l];
           }
           for(q=0;q<m;q++)
              for(l=0;l<m;l++)
                 if(q!=l) arr[gr[str2[q]]][gr[str2[l]]]=str2[l];
        }
        for(j=0;j<n;j++) getline(cin,str3[j]);
        start=y;
        bfs(gr);
        cout<<"Scenario "<<i+1<<"\n";
        for(j=0;j<n;j++) 
        {
          ans=dist[gr[str3[j]]];
          cout<<str3[j]<<" ";
          if(ans==-1) cout<<"infinity";
          else cout<<ans;
          cout<<"\n";
        }
    }
    return 0;
}
void bfs(map<string,int> gr)
{
     int flag,j,pos,i,ver=k-1;
     dist=(int*)malloc((ver+1)*sizeof(int));
     color=(char*)malloc((ver+1)*sizeof(char));
     queue<string> a;
     for(i=1;i<=ver;i++) {color[i]='w';dist[i]=-1;}
     dist[gr[start]]=0;
     color[gr[start]]='g';
     a.push(start);
     //cout<<start<<" ";
     while(!a.empty())
     {
        x=a.front();
        a.pop();
        for(j=1;j<=ver;j++)
          if(arr[gr[x]][j]!="" && color[j]=='w')
          {
             //cout<<arr[gr[x]][j]<<" ";
             dist[j]=dist[gr[x]]+1;
             color[j]='g';
             a.push(arr[gr[x]][j]);
          }
        color[gr[x]]='b';
     }
}
