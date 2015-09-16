#include<iostream>
using namespace std;
int main()
{
    char str[100];
    while((scanf("%s",str))!=EOF)
//    while(gets(str))
    {
       for(int i=0;i<strlen(str);i++)
         str[i]=str[i]-7;
       cout<<str<<"\n";
    }
    return 0;
}
