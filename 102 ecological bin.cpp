#include<iostream.h>
#include<string>
using namespace std;
int main()
{
    string s;
    long long arr[9],i=0,a1,a2,a3,a4,a5,a6,min;
    while(cin>>arr[i])
    {
       i++;
       if(i==9) 
       {    
           min=a1=(arr[3]+arr[6]+arr[2]+arr[8]+arr[1]+arr[4]);s="BCG";
           if((a2=(arr[3]+arr[6]+arr[1]+arr[7]+arr[2]+arr[5]))<min) {min=a2;s="BGC";}
           if((a3=(arr[5]+arr[8]+arr[0]+arr[6]+arr[1]+arr[4]))<min) {min=a3;s="CBG";}
           if((a4=(arr[5]+arr[8]+arr[1]+arr[7]+arr[0]+arr[3]))<min) {min=a4;s="CGB";}
           if((a5=(arr[4]+arr[7]+arr[0]+arr[6]+arr[2]+arr[5]))<min) {min=a5;s="GBC";}
           if((a6=(arr[4]+arr[7]+arr[2]+arr[8]+arr[0]+arr[3]))<min) {min=a6;s="GCB";}
           cout<<s<<" "<<min<<"\n";
           i=0;
       }
    }
    return 0;
}
