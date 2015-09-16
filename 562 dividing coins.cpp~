// 2 48 48 49 49 50 50 
// 1 9 990 10 

#include<iostream>
#define MAX1 25002
#define MAX2 102
int arr1[MAX2][MAX1],arr[MAX2][MAX1],v[MAX2],w[MAX2],a[MAX2];
int abs1(int a)
{
   return a<0?a*-1:a;
}
using namespace std;
int main()
{
    int i,j,no,size,size1,m,test,sum,sum1,sum2;
    cin>>test;
    while(test--)
    {
        sum=0;
        sum1=0;
        sum2=0;
        cin>>no;
        for(i=1;i<=no;i++) {cin>>v[i];w[i]=v[i];sum+=v[i];}
        size=sum/2;
        for(i=0;i<=size;i++) {arr[0][i]=0;arr1[0][i]=0;}
        for(i=1;i<=no;i++)
        {
           for(j=0;j<=size;j++)
           if((w[i]<=j) && (v[i]+arr[i-1][j-w[i]])>=arr[i-1][j])
           {
              arr[i][j]=v[i]+arr[i-1][j-w[i]];
              arr1[i][j]=1;
           }
           else
           {
              arr[i][j]=arr[i-1][j];
              arr1[i][j]=0;
           }
        }
        size1=size;
        m=0;
        for(i=no;i>0;i--)
        {
           if(arr1[i][size1]==1) 
           {
              a[m++]=v[i];
              size1=size1-w[i];
           }
        }        
        for(i=m-1;i>=0;i--) sum1+=a[i];
        sum2=sum-sum1;
        cout<<abs1(sum1-sum2)<<"\n";
    }
    return 0;
}
