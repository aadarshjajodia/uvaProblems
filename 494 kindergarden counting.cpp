#include<iostream.h>
int main()
{
    int i,count,f;
    char str[1000000];
    while(gets(str))
    {
        f=1;
        count=0;
        strcat(str," ");
        for(i=0;i<strlen(str);i++)
        {
            if(isalpha(str[i])) f=0;
            if(str[i]==' ' && f==0)  {count++;f=1;}
        }
        cout<<count<<"\n";
    }
    return 0;
}
