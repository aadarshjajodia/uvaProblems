#include<iostream.h>
#include<conio.h>
#define MAX(a,b)(a>b?a:b)
#include<stdlib.h>
int minbase(char s[]);
int minbase(char s[])
{
    int i,rem,ma=-9999,b,x;
    for(i=0;i<strlen(s);i++)
    {
       if(s[i]>=65 && s[i]<=90) ma=MAX(s[i]-55-((s[i]-55)/1),(s[i]-55)%10);
       else ma=MAX((int)s[i]-48,ma);
    }
    return ma+1;
}
int main()
{
    char s1[100],s2[100],sa1[100],sa2[100];
    gets(s1);gets(s2);                                                  
    int a=atoi(s1);
    int b=atoi(s2);
    int x=minbase(s1);int y=minbase(s2);
    for(int i=x;i<9;i++)
    {
       for(int j=y;j<9;j++)
       {
               cout<<itoa(a,sa1,i)<<" "<<itoa(b,sa2,j)<<"\n";
               if(strcmp(sa1,sa2)==0) {cout<<" "<<i<<" "<<j;break;}
       }
    }
    getch();
    return 0;
}
