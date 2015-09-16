#include<stdio.h>
#include<string.h>
int main()
{
    int count,l,i,j,test;
    char s[200],d;
    scanf("%d\n\n",&test);
    for(int i=0;i<test;i++)
    {
        count=0;
        l=1;
        scanf("%s",s);
        d=s[0];
        for(j=1;j<strlen(s);j++)
           if(s[j]==d)  break;
        printf("%d\n",j);
    }
    return 0;
}
