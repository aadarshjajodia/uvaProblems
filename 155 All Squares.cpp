#include<iostream.h>
#include<stdio.h>
int sqr[5000000][2];
int main()
{
    int count,size,x,y,a,b,c,d;
    long long int co,fl,m,i;
    while(cin>>size>>x>>y && (size!=0 || x!=0 || y!=0))
    { 
          co=1;
          m=0;
          fl=0;
          count=0;
          int startx=1024,starty=1024;
          while(size!=0)
          {          
              for(i=0;i<co;i++)
              {
                  a=sqr[m][0]=startx-size;
                  b=sqr[m++][1]=starty-size;
                  c=sqr[m][0]=startx+size;
                  d=sqr[m++][1]=starty+size;
                  sqr[m][0]=startx-size;
                  sqr[m++][1]=starty+size;
                  sqr[m][0]=startx+size;
                  sqr[m++][1]=starty-size;
                  if(x>=a && x<=c && y>=b && y<=d) count++;
                  startx=sqr[fl][0];
                  starty=sqr[fl][1];
                  fl++;
              }
              co=co*4;
              size=size/2;
          }
          printf("%3d\n",count);
    }
    return 0;
}
