#include<iostream.h>
#include<string>
using namespace std;
int main()
{
    string str="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str2="``1234567890-QQWERTYUIOP[]AASDFGHJKL;ZZXCVBNM,.";
    char st[10000];
    while(gets(st))
    {
          string s2(st);
          for(int i=0;i<s2.length();i++)
          {    int a=str.find(s2[i]);
               if(a!=s2.npos) s2[i]=str2[a];
          }     
          cout<<s2<<"\n";
    }
    return 0;
}
