#include<iostream>
#define MIN(a,b) (a<=b?a:b)
#define MAX(a,b) (a>=b?a:b)
using namespace std;
float arr[100][3],arr1[100],x,y,temp,y1,y2;
int unique(float);
int m=0;
int main()
{
    int n,p,test,i,k,j;
    cin>>n;
    for(p=0;p<n;p++)
    {
       float l=1.0;
       cin>>test;
       for(j=0;j<test;j++)
       {
          cin>>arr[j][0]>>y1>>arr[j][1]>>y2>>arr[j][2];
          if(!unique(arr[j][0])) arr1[m++]=arr[j][0];
          if(!unique(arr[j][1])) arr1[m++]=arr[j][1];
       }
       for(j=0;j<m-1;j++)
         for(k=j+1;k<m;k++)
         {
            if(arr1[j]>=arr1[k])
            {
               temp=arr1[j];
               arr1[j]=arr1[k];
               arr1[k]=temp;
            }
         }
       float min,max;
       for(i=0;i<m-1;i++)
       {
          l=1.0;
          x=arr1[i];
          y=arr1[i+1];
          for(j=0;j<test;j++)
          {
             min=MIN(arr[j][0],arr[j][1]);
             max=MAX(arr[j][0],arr[j][1]);
             if(min<=x && max >=y) l=l*arr[j][2];
          }
          cout<<x<<" "<<y<<" "<<l<<"\n";
       }
    }
    while(1);
    return 0;
}
       
int unique(float no)
{
     int i,flag=0;
     for(i=0;i<m;i++)
     {
         if(no==arr1[i]) 
         {
             flag=1;
             break;
         }
     }
     if(flag==0) return 0;
     else return 1;
}
