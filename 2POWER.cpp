#include<iostream>
using namespace std;
char str[5001][5001];
int main()
{
    char temp;
    long int m,carry,n,no1;
    str[0][0]='1';
    str[0][1]='\0';
    for(int i=1;i<=5000;i++)
    {
           m=0;carry=0;
           for(int j=strlen(str[i-1])-1;j>=0;j--)
           {
              str[i][m++]=((2 * (str[i-1][j]-48)+carry) % 10) + 48;
              carry= (2 * (str[i-1][j]-48) + carry) / 10;
           }
           while(carry>0)
           {   str[i][m++]=carry%10 + 48;
                carry/=10;
           }
           str[i][m]='\0';
           for(int k=0;k<=(strlen(str[i])-1)/2;k++)
           {
              temp=str[i][k];
              str[i][k]=str[i][m-1];
              str[i][m-1]=temp;
              m--;
           }
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>no1;
       cout<<str[no1]<<"\n";
    }
    return 0;
}
