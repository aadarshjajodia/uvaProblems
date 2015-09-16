#include<iostream.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,sum,x1,x2,x3,x4,x5,x6,flag4_2,flag3_2;
    while((cin>>x1>>x2>>x3>>x4>>x5>>x6) && (x1!=0 || x2!=0 || x3!=0 || x4!=0 || x5!=0 || x6!=0))
    {
       sum=0;
       sum=sum+x6+x5+x4;
       a5=11*x5;
       a4=20*x4;
       a2=x2;
       if(a4!=0) flag4_2=5;
       sum=sum+((9*x3)/36);
       if((9*x3)%36==0) a3=0;
       else 
       {  
          sum=sum+1;
          a3=(9*x3)%36;
          if(a3%27==0) flag3_2=1;
          else if(a3%18==0) flag3_2=3;
          else if(a3%9==0) flag3_2=5;
          a3=36-a3;
       }
       if(a2>0 && a4!=0) 
       {
          if(((flag4_2)*x4)>x2) {a4=a4-(4*x2);a2=0;}
          else 
          {
            a4=0;
            a2=x2-(flag4_2*x4);
          }
       }
       if(a2>0 && a3!=0)
       {
          if(flag3_2>=a2) {a3=a3-(4*a2);a2=0;}
          else 
          {
            a2=a2-flag3_2;
            a3=a3-(4*flag3_2);
          }
       }
       if(a2>0)
       {
          sum=sum+((4*a2)/36);
          if((4*a2)%36==0) a2=0;
          else 
          {  
              sum=sum+1;
              a2=36-(4*a2)%36;
          }
       }
       if(x1>0 && (a5+a4+a3+a2)<x1) 
       {
          a1=x1-(a5+a4+a3+a2);
          sum=sum+(a1/36);
          if(a1%36==0) a1=0;
          else sum=sum+1;
       }
       cout<<sum<<"\n";
    }
    return 0;
}
