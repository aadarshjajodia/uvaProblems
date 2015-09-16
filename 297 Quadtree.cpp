#include<iostream>
#define size 32
using namespace std;
bool arr[33][33];
void quad(char *,int,int,int);
int k;
void fill(int,int,int);
int main()
{
    int i,j,count,n;
    char str1[1000],str2[1000];
    cin>>n;
    while(n--)
    {
       count=0;        
       for(i=0;i<size;i++) for(j=0;j<size;j++) arr[i][j]=0;
       cin>>str1>>str2;
       k=-1;
       quad(str1,0,size-1,size);
       k=-1;
       quad(str2,0,size-1,size);
       for(i=0;i<size;i++) for(j=0;j<size;j++) if(arr[i][j]) count++;
       cout<<"There are "<<count<<" black pixels.\n";
    }
    return 0;
}
void quad(char *str,int a,int b,int c)
{
     k++;
     if(str[k]!='\0')
     {
         if(str[k]=='p')
         {
             c=c/2;
             quad(str,a,b,c);
             quad(str,a,b-c,c);
             quad(str,a+c,b-c,c);
             quad(str,a+c,b,c);
         }
         else if(str[k]=='e') return;
         else if(str[k]=='f') fill(a,b,c);
     }
}
void fill(int x,int y,int t)
{
     int i,j;
     for(i=x;i<x+t;i++)
       for(j=y;j>y-t;j--)
           arr[i][j]=1;
}
