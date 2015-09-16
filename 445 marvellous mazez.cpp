#include<iostream.h>
#include<ctype.h>
int fun(int);
int main()
{
    int i,len,j,m=0;
    char *str,b;
    str=new char[1000];
    while((b=getchar())!=EOF)
    {
         if(b=='\n') 
         {
         str[m]='\0';
         for(i=0;i<strlen(str);i++)
             if(!isdigit(str[i]))
             {
                  int x=fun(atoi(str));
                  for(j=0;j<x;j++)
                      if(str[i]=='b') cout<<" ";
                      else cout<<str[i];
                  str=str+i+1;i=0;
                  if(str[0]=='!') {cout<<"\n";str=str+1;i=0;}
             }
         cout<<"\n";  
         str[0]='\0';m=0;
         }
         else str[m++]=b;
    }
    return 0;
}
int fun(int no)
{
    int copy=no,rem,sum=0;
    while(copy>0)
    {
        rem=copy%10;
        sum+=rem;
        copy/=10;
    }
    if(sum/10>0) return fun(sum);
    else if(sum/10==0) return sum;
}
        
