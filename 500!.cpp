#include<iostream>
using namespace std;
char str[1010][1000];
int main()
{
    char temp;
    unsigned long long int a,b,i;
    int m,carry,n;
    str[0][0]='1';
    str[0][1]='\0';
    for(i=1;i<=1000;i++)
    {
           m=0;carry=0;
           for(int j=strlen(str[i-1])-1;j>=0;j--)
           {
              str[i][m++]=((i * (str[i-1][j]-48)+carry) % 10) + 48;      
              carry= (i * (str[i-1][j]-48) + carry) / 10;
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
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>b;
        cout<<str[b]<<"\n";
    }
    return 0;
}

