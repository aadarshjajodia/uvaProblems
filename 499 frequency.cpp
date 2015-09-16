 #include<iostream.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[52],max,i,m,x;
    for(i=0;i<52;i++) arr[i]=0;
    char str[10000],s[10000];
    while(gets(str))
    {
             max=-9999;
             s[0]='\0';m=0;x=0;
             for(i=0;i<26;i++)
             {
                   arr[m]=count(str,strlen(str)+str,'A'+i);
                   arr[m+26]=count(str,strlen(str)+str,'a'+i);
                   m++;
             }
             for(i=0;i<52;i++)
                 if(arr[i]>=max) max=arr[i];
             for(i=0;i<52;i++)
                 if(arr[i]==max)
                 {
                    if(i<=25) s[x++]=i+65;
                    else s[x++]=i+71;
                 }
             s[x]='\0';
             cout<<s<<" "<<max<<"\n";
    }
    return 0;
}
