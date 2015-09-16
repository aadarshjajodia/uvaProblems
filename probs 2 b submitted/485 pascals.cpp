#include<iostream>
using namespace std;
char mat[601][601][61],q1[100],q2[100];
char* fun(char a[],char b[]);
int main()
{
    char r[]="1";
    register unsigned long long int i,j,f=1,t;
    for(i=0;;i++)
    {
        for(j=0;j<=i;j++)
        {
           if(j==i || j==0) strcpy(mat[i][j],r);
           else 
           {
               strcpy(q1,mat[i-1][j]);
               strcpy(q2,mat[i-1][j-1]);
               strcpy(mat[i][j],fun(q1,q2));
           }
           if(strlen(mat[i][j])==61) f=0;
        }
        if(f==0) {t=i;break;}
    }
    for(i=0;i<=t;i++)
    {
       for(j=0;j<=i;j++)
       {  
         cout<<mat[i][j];
         if(j!=i) cout<<" ";
       }
       cout<<"\n";
    }
    return 0;
}
char* fun(char str1[],char str2[])
{
    char str[100],temp[100];
    unsigned long long int i,carry=0,k=0,a,l,m,c,d;
    l=strlen(str1);
    m=strlen(str2);
    if(l<m)
    {
        strcpy(temp,str1);
        strcpy(str1,str2);
        strcpy(str2,temp);
    }
    strrev(str1);
    strrev(str2);
    if(l==m) c=d=l;
    else if(l>m) {c=l;d=m;}
    else {c=m;d=l;}
    for(i=0;i<c;i++)
    {
       if(i==d) break;
       a=str1[i]-48 + str2[i]-48+carry;
       str[k++]=(a % 10) + 48;
       carry=a/10;
    }
    if(c!=d)
    {
      for(i=d;i<c;i++)
      {
        a=str1[i]-48+carry;
        str[k++]=(a % 10) + 48;
        carry=a/10;
      }
    }
    if(carry) str[k++]=carry+48;
    str[k]='\0';
    strrev(str);
    return str;
}
