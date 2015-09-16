#include<iostream>
using namespace std;
int main()
{
    int i,j,v[25],w[25],no,size,size1,m,a[25],**arr,**arr1;
    while(cin>>size>>no)
    {
        for(i=1;i<=no;i++) {cin>>v[i];w[i]=v[i];}
        arr1=(int**)malloc((no+1)*sizeof(int));
        arr=(int**)malloc((no+1)*sizeof(int));
        for(i=0;i<=no;i++)
        {
           arr[i]= (int*)malloc((size+1)*sizeof(int));
           arr1[i]= (int*)malloc((size+1)*sizeof(int));
        }
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
        for(i=m-1;i>=0;i--) cout<<a[i]<<" ";
        cout<<"sum:"<<arr[no][size]<<"\n";
    }
    return 0;
}
