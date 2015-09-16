#include<iostream.h>
#include<string>
using namespace std;
int main()
{
    float mm,hh,angle;
    int x;
    char str[5];
    str=new char[10];
    while(gets(str))
    {
       hh=atof(str);
       string s(str);
       x=s.find(":");
       mm=atof(str+x+1);
       if(hh==0 && mm==0) break;
       angle=(hh*30+(mm/2))-(mm*6);
       if(angle<0) angle=-angle;
       if(angle>180) angle=360-angle;
       printf("%0.3f\n",angle);
    }
    return 0;
}
