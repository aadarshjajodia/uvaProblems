#include<iostream.h>
int main()
{
    int arr[100],m,i,n,avg,count,x=1;
    while(cin>>n && n!=0)
    {
       avg=0;m=0;count=0;
       for(i=0;i<n;i++)
       {  
           cin>>arr[m];
           avg=avg+arr[m];
           m++;
       }
       avg=avg/n;
       for(i=0;i<m;i++)
       {
           if((arr[i]-avg)<0) count=count+abs(arr[i]-avg);
       }
       cout<<"Set #"<<x++<<"\nThe minimum number of moves is "<<count<<".\n\n";
    }
    return 0;
}  
