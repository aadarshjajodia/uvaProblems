#include<iostream.h>
int main()
{
   long n,sum;
   cout<<"PERFECTION OUTPUT\n";
   while(cin>>n && n!=0)
   {
       sum=0;
       for(int j=1;j<=n/2;j++)
         if(n%j==0) sum+=j;
       printf("%5ld",n);
       if(sum==n) cout<<"  PERFECT\n";
       else if(sum>n) cout<<"  ABUNDANT\n";
       else if(sum<n) cout<<"  DEFICIENT\n";
   }
   cout<<"END OF OUTPUT\n";
   return 0;
}
