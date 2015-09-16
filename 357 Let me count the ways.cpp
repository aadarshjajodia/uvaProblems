#include<iostream.h>
#define MAX 30005
int main()
{
    register unsigned long long int i,j,n,arr[(MAX+5)/5];
    for(i=0;i<=MAX;i=i+5) arr[i/5]=1;
    register int coin[]={1,5,10,25,50};
    for(i=1;i<5;i++)
    {
       for(j=0;j<=MAX;j=j+5)
       {  
         if(coin[i]<=j)
           arr[j/5]+=arr[(j-coin[i])/5];
       }
    }
    while(cin>>n) 
    {
       if(arr[n/5]!=1) cout<<"There are "<<arr[n/5]<<" ways to produce "<<n<<" cents change.\n";
       else cout<<"There is only "<<arr[n/5]<<" way to produce "<<n<<" cents change.\n";
    }
    return 0;
}
