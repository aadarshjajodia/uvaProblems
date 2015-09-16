#include<iostream>
using namespace std;
int rem[100],no[10002],val[202];
int main()
{
    int i,test,k,p,m,n,j,v,temp1,temp2,div;
    cin>>test;
    for(i=0;i<test;i++)
    {
        cin>>n>>div;
        for(j=0;j<100;j++) rem[j]=0;
        for(j=0;j<n;j++)
           cin>>no[j];
        for(j=0;j<n;j++) {no[j]=no[j]%div;if(no[j]<0) no[j]+=div;}
        p=no[0];
        rem[p]=1;
        m=0;
        for(j=1;j<n;j++)
        {
           for(k=0;k<100;k++)
           {
              if(rem[k]==1) 
              {
                 val[m++]=k;
                 rem[k]=0;
              }
           }
           for(k=0;k<m;k++)
           {
              v=val[k];
              temp1=(v+no[j]+div)%div;
              temp2=(v-no[j]+div)%div;
              rem[temp1]=1;
              rem[temp2]=1;
           } 
           m=0;
        }
        if(rem[0]==1) cout<<"Divisible\n";
        else cout<<"Not divisible\n";
    }
    return 0;
}
