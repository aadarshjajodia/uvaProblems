#include<iostream.h>
#define MAX 7500
int main()
{
    register unsigned long long int i,j,n,arr[(MAX+5)/5];
    for(i=0;i<=MAX;i=i+5) arr[i/5]=1;
    register int coin[]={1,5,10,25,50};
    for(i=1;i<5;i++)
       for(j=0;j<=MAX;j=j+5) if(coin[i]<=j) arr[j/5]+=arr[(j-coin[i])/5];
    while(cin>>n) cout<<arr[n/5]<<"\n";
    return 0;
}
