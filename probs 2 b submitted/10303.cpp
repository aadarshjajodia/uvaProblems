#include<iostream.h>
long long int inline gcd(long long int x,long long int y)
{
    if(y==0) return x;
    else return gcd(y,x%y);
}
void inline divbygcd(long long int &a,long long int &b)
{
    long long int hcf=gcd(a,b);
    a=a/hcf;
    b=b/hcf;
}
long long int ncat[2004],dcat[2004];
int main()
{
    long long int npart,dpart,n;
    while(cin>>n)
    {
        ncat[1]=2;
        dcat[1]=2;
        long long int nr=1,dnr=2;
        for(int i=1;i<n;i++)
        {
             npart=(2*i+1)*2*(i+1);
             dpart=(i+1)*(i+2);
             divbygcd(npart,dcat[i]);
             divbygcd(dpart,ncat[i]);
             ncat[i+1]=npart*ncat[i];
             dcat[i+1]=dpart*dcat[i];
        }
        cout<<ncat[n]/dcat[n]<<"\n";
    }
    return 0;
}
