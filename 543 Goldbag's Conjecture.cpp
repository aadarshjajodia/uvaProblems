#include<iostream.h>
#define MAX 1000001
static int arr[MAX];
int main()
{
    long long  n,i,t,f,k;
    for(i=2;i<=MAX;i++) arr[i]=1;
    for(i=2;i<=MAX;i++)
    {
        if(arr[i]!=0)
          for(k=i*i;k<=MAX;k=k+i) arr[k]=0;
    }
    while(cin>>n && n!=0)
    {
        f=0;
        for(i=n-1;i>=0;i--) if(arr[i] && arr[n-i]) {f=1;break;}
        if(f==0) cout<<"Goldbach's conjecture is wrong.\n";
        else cout<<n<<" = "<<n-i<<" + "<<i<<"\n";
    }
    return 0;
}
