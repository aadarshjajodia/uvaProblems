#include<iostream.h>
int main()
{
    int i,j,k,m,n,count,arr[50],temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
         count=0;
         cin>>m;
         for(j=0;j<m;j++) cin>>arr[j];
         for(j=0;j<m-1;j++)
            for(k=j+1;k<m;k++)
              if(arr[j]>arr[k])
              {
                 temp=arr[j];
                 arr[j]=arr[k];
                 arr[k]=temp;
                 count++;
              }
         cout<<"Optimal train swapping takes "<<count<<" swaps.\n";
    }
    return 0;
}
         
                 
           
             
