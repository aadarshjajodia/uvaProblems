#include<iostream>
#include<string>
using namespace std;
string base(long,int);
long dec(int);
char s[10000];
int main()
{
    int i,d,e;
    while(cin>>s>>d>>e)
    {   
        char q[]="ERROR";
        string str=base(dec(d),e);
        if(str.size()>7) printf("%7s\n",q);
        else printf("%7s\n",str.c_str());
    }
    return 0;
}
string base(long m,int base)
{
      int rem;
      string s1;
      while(m>0)
      {
         rem=m%base;
         if(rem>9) s1+=char(rem+55);
         else s1+=char(rem+48);
         m=m/base;
      }
      reverse(s1.begin(),s1.end());
      return s1;
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
