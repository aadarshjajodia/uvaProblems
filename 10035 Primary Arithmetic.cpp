#include<iostream.h>
int main()
{
    unsigned long a,b,count,rem1,rem2,x;
    while(cin>>a>>b && (a|b)!=0)
    {
       count=0;x=0;
       while(a>0 || b>0)
       {
                 rem1=a%10;
                 rem2=b%10;
                 if((rem1+rem2+x)>=10) {count++;x=1;}
                 else x=0;
                 a=a/10;
                 b=b/10;
       }
       if(count==0) cout<<"No";
       else cout<<count;
       if(count>1) cout<<" carry operations.\n";
       else cout<<" carry operation.\n";
    }
    return 0;
}
