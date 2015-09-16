#include<iostream.h>
int sum[1000];
char str[1020][10000];
int main()
{
    char temp;
    int m,carry,n,l;
    str[0][0]='1';
    str[0][1]='\0';
    sum[0]=1;
    for(int i=1;i<=1000;i++)
    {
           l=0;
           sum[i]=0;
           m=0;carry=0;
           for(int j=strlen(str[i-1])-1;j>=0;j--)
           {
              str[i][m]=((i * (str[i-1][j]-48)+carry) % 10) + 48;
              sum[i]+=str[i][m]-48;
              carry= (i * (str[i-1][j]-48) + carry) / 10;
              m++;
           }
           while(carry>0)
           {   
               str[i][m]=carry%10 + 48;
               sum[i]+=str[i][m]-48; 
                carry/=10;
                m++;
           }
           str[i][m]='\0';
           l=strlen(str[i])-1;
           for(int k=0;k<=(strlen(str[i])-1)/2;k++)
           {
              temp=str[i][k];
              str[i][k]=str[i][m-1];
              str[i][m-1]=temp;
              m--;
           }
    }
    while(cin>>n)
       cout<<sum[n]<<"\n";
    return 0;
}
