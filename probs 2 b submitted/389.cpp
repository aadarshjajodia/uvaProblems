#include<iostream.h>
#include<ctype.h>
long dec(int);
char s[8];
int main()
{
    int i,d,e;
    char str[8];
    char q[]="ERROR";
    while(cin>>s>>d>>e)
    {   
        ltoa(dec(d),str,e);
        for(i=0;i<strlen(str);i++)
            if(islower(str[i])) str[i]=toupper(str[i]);
        if(strlen(str)>7) printf("%7s\n",q);
        else printf("%7s\n",str);
    }
    return 0;
}    
long dec(int x)
{
     long sum=0,m=0;
     for(int i=0;i<strlen(s);i++)
     {
             if(s[i]>=65) sum=(sum*x)+s[i]-55;
             else sum=(sum*x)+(s[i]-48);
     }
     return sum;
}
