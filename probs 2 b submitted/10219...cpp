#include<iostream.h>
long long arr[1000][10000];
int main()
{
    long long int n,r,i,j;
    while(cin>>n>>r && (n|r)!=0)
    {
          for(i=0;i<n+1;i++)
          {
              arr[i][0]=1;   
              arr[i][i]=1;
              for(j=1;j<r+1  && j<i;j++)  if(i!= j) arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
          }
          cout<<n<<" things taken "<<r<<" at a time is "<<arr[n][r]<<" exactly.\n";
    }
    return 0;
}
