#include<iostrem.h>
int parity(int);
int main()
{
    bool arr[10][10];
    int n;
    while(cin>>n && n!=0)
    {
       for(i=0;i<n;i++)
         for(j=0;j<n;j++)
           cin>>arr[i][j];
       
    }
}
int parity(bool arr[][20],int n)
{
    sum=0;
    for(i=0;i<n;i++)
    {
      sum=0;
      for(j=0;j<n;j++)
      {  
        if(arr[i][j]) t=j;
        sum+=arr[i][j];
        sum1+arr[j][i];
      }
      if(sum%2==0)count++;

      
      
        
      
    
