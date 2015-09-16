#include<iostream>
using namespace std;
int main()
{
    int no,temp1,temp2,temp3,temp4;
    while(cin>>no)
    {
        int c=0xFF,num=0;
        temp1=(unsigned int)c&no;
        c=c<<8;
        temp2=(unsigned int)(c&no)>>8;
        c=c<<8;
        temp3=(unsigned int)(c&no)>>16;
        c=c<<8;
        temp4=(unsigned int)(c&no)>>24;
        num=(temp1<<24) | (temp2<<16) | (temp3<<8) | temp4;
        cout<<no<<" converts to "<<num<<"\n";
    }
    return 0;
}
