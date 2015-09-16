#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n,i,j,x,y;
    while(cin>>n)
    {
        unsigned long long int a=1,b=1,count=1;
        while(1)
        {
            if(count==n) break;
            if(a==1) 
            {   
               b++;
               count++;
               y=-1;
               x=1;
            }
            else if(b==1) 
            {
               a++;
               count++;
               x=-1;
               y=1;
            }
            if(count==n) break;
            a=a+x;
            b=b+y;
            count++;
        }
        cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<"\n";
    }
    return 0;
}
