#include<iostream>
#define max(a,b) a>b?a:b
long long int arr[20001],sum[20001];
using namespace std;
int main()
{
        long long int temp,i,j,t,n,max,test,k,s;
        cin>>test;
        for(j=0;j<test;j++)
        {   
               k=0;
               cin>>n;
               s=0;
               for(i=0;i<n-1;i++) cin>>arr[i];
               max=sum[0]=arr[0];
               for(i=1;i<n-1;i++) sum[i]=max(arr[i],arr[i]+sum[i-1]);
               for(i=0;i<n-1;i++)
                      if(sum[i]>=max) 
                      {  
                        max=sum[i];
                        t=i;
                      }
               for(i=0;i<=t;i++) s+=arr[i];
               if(s==max) k=0;
               else k=1;
               for(i=t;i>=k;i--) if(sum[i]==arr[i]) temp=i;
               if(max<=0) cout<<"Route "<<j+1<<" has no nice parts";
               else cout<<"The nicest part of route "<<j+1<<" is between stops "<<temp+1<<" and "<<t+2;
               if(j!=(test-1)) cout<<"\n";
        }
        return 0;
}
