#include<iostream.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
int main()
{
    int i,in,x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6,n;
    cin>>n;
    for(i=0;i<n;i++)
    {  
        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;
        if(x3<x2 && x4>x1 && y3<y2 && y4>y1)
        {
            x5=max(x1,x3);
            y5=max(y1,y3);
            x6=min(x2,x4);
            y6=min(y2,y4);
            cout<<x5<<" "<<y5<<" "<<x6<<" "<<y6<<"\n\n";
        }
    }
    return 0;
}
        
         
    
