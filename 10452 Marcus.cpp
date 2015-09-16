#include<iostream>
int a,b,m;
char p[8]="IEHOVA#",ch1,ch2,ch3,s[100][100];
void fun(int r,int c);
using namespace std;
int main()
{
    int i,j,k,test,t,r,c;
    cin>>test;
    for(i=0;i<test;i++)
    {
       cin>>a>>b;
       for(j=0;j<a;j++)
       {
         for(k=0;k<b;k++) cin>>s[j][k];
       }
       for(j=0;j<b;j++) if(s[a-1][j]=='@') c=j;
       r=a-1;
       m=0;
       fun(r,c);
       cout<<"\n";
    }
    return 0;
}
void fun(int r,int c)
{
       if(c-1>=0) ch1=s[r][c-1];
       else ch1=' ';
       if(c+1<b) ch2=s[r][c+1];
       else ch2=' ';
       if(r-1>=0) ch3=s[r-1][c];
       else ch3=' ';
       if(ch1==p[m]) 
       {
          if(ch1=='#') {cout<<"left";return;}
          else
          {   cout<<"left ";
              m++;
              fun(r,c-1);
          }
       }
       else if(ch2==p[m]) 
       {
          if(ch2=='#') {cout<<"right";return;}
          else
          {
              cout<<"right ";
              m++;
              fun(r,c+1);
          }
       }
       else if(ch3==p[m]) 
       {
          if(ch3=='#') {cout<<"forth";return;}
          else
          {
              cout<<"forth ";
              m++;
              fun(r-1,c);
          }
       }
}
