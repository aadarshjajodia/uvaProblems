#include<iostream.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,midx1,midx2,midy1,midy2,slop1,slop2,xc,yc,r;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
          char f1='-',f2='-',f3='+';
          midx1=(x1+x2)/2;
          midy1=(y1+y2)/2;
          slop1=-(x2-x1);
          midx2=(x1+x3)/2;
          midy2=(y1+y3)/2;
          slop2=-(x3-x1);        
          xc=(((midx1*slop1)/(y2-y1)-midy1)-((midx2*slop2)/(y3-y1)-midy2))/(slop1/(y2-y1)-slop2/(y3-y1));
          yc=(slop1*(xc-midx1))/(y2-y1)+midy1;
          r=pow(((xc-x1)*(xc-x1)+(yc-y1)*(yc-y1)),0.5);
          if(xc<0) {f1='+';xc=-xc;}
          if(yc<0) {f2='+';yc=-yc;}
          printf("(x %c %0.3f)^2 + (y %c %0.3f)^2 = %0.3f^2\n",f1,xc,f2,yc,r);
          float a=xc*xc+yc*yc-(r*r);
          if(a<0) {f3='-';a=-a;}
          printf("x^2 + y^2 %c %0.3fx %c %0.3fy %c %0.3f = 0\n\n",f1,2*xc,f2,2*yc,f3,a);
    }
    return 0;
}
