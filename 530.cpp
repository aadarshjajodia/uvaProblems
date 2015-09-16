#include<iostream.h>
long long int gcd(long long int,long long int);
void divbygcd(long long int &a,long long int &b);
int main()
{
    register long long int n,k,l,mul,div;
    while(cin>>n>>k && (n!=0 | k!=0))
    {
        long long int nr=1,dnr=1;
        l=n;
        if(k>n/2) k=n-k;
        for(int i=k;i>=1;i--)
        {
           mul=l--;
           div=i;
           divbygcd(mul,div);
           divbygcd(nr,div);
           divbygcd(mul,dnr);
           nr=nr*mul;
           dnr=dnr*div;
        }
        cout<<nr/dnr<<"\n";
    }
    return 0;
}   
long long int gcd(long long int x,long long int y)
{
    if(y==0) return x;
    else return gcd(y,x%y);
}
void divbygcd(long long int &a,long long int &b)
{
    long long int hcf=gcd(a,b);
    a=a/hcf;
    b=b/hcf;
}
