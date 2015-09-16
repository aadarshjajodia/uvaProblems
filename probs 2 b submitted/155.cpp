#include<iostream>
using namespace std;    
int x,y,size;
int calc(int dx,int dy,int dsize)
{
    static int cnt=0;
    if(dsize==1) return 0;
    if(dsize>1)    
    {
       int val=calc(dx-dsize,dy-dsize,dsize/2)+calc(dx+dsize,dy+dsize,dsize/2)+calc(dx-dsize,dy+dsize,dsize/2)+calc(dx+dsize,dy-dsize,dsize/2);
       //cout<<val<<"\n";
       if(x>=(dx-dsize) && x<=(dx+dsize) && y>=(dy-dsize) && y<=(dy+dsize)) return 1+val;
       else return val;
    }
}    
int main()
{
    int i;
    while(cin>>x>>y>>size) cout<<calc(1024,1024,size)<<"\n";
    return 0;
}
