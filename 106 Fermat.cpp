#include<iostream>
#include<cmath>
#define MAX 1000001
bool arr[MAX];
int arr1[MAX];
using namespace std;
long long gcd(long long a,long long b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    long long i,j,a,b,c,n,cnt,cnt1,m,k;
    while(cin>>n)
    {
        cnt=0;cnt1=0;m=0;
        for(i=1;i<=n;i++) arr[i]=0;
        for(i=1;i<=sqrt(n);i++)
          for(j=i+1;j<=sqrt(n);j++)
          {
             if(gcd(i,j)==1 && (i%2==0 || j%2==0))
             {
                a=i*i+j*j;
                b=abs(i*i-j*j);
                c=2*i*j;
                if(a<=n && b<=n && c<=n)
                {
                   arr[a]=1;
                   arr[b]=1;
                   arr[c]=1;
                   for(k=2;a*k<=n && b*k<=n && c*k<=n;k++) // multiples. of the coprime triplets
                   {
                      arr[a*k]=1;
                      arr[b*k]=1;
                      arr[c*k]=1;
                   }
                   cnt++;
                }
              }
          }
        for(i=1;i<=n;i++) if(arr[i]==0) cnt1++;
        cout<<cnt<<" "<<cnt1<<"\n";
    }
    return 0;
}
