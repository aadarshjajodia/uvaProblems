#include<iostream>
using namespace std;
int main()
{
    int l,i,flag1,flag2;
    char str[36],str2[36],str3[100];
    for(i=0;i<36;i++) str2[i]=' ';
    for(i=0;i<26;i++) str[i]=char(i+65);
    for(i=26;i<36;i++) str[i]=char(i+48-26);
    for(i=0;i<36;i++) 
    {
       if(str[i]=='A' || str[i]=='M' || str[i]=='O' || str[i]=='T' || str[i]=='U' || str[i]=='V' || str[i]=='W' || str[i]=='X' || str[i]=='H' || str[i]=='I' || str[i]=='Y' || str[i]=='1' || str[i]=='8') str2[i]=str[i];
       if(str[i]=='E') str2[i]='3';
       if(str[i]=='3') str2[i]='E';
       if(str[i]=='J') str2[i]='L';
       if(str[i]=='L') str2[i]='J';
       if(str[i]=='S') str2[i]='2';
       if(str[i]=='2') str2[i]='S';
       if(str[i]=='Z') str2[i]='5';
       if(str[i]=='5') str2[i]='Z';
       if(str[i]=='0') str2[i]='O';
    }
    str2[36]='\0';
    while((scanf("%s",str3))!=EOF)
    {
        flag1=0;flag2=0;
        l=strlen(str3);
        for(i=0;i<=(l/2-1);i++)
        {
          if(str3[i]!=str3[l-1-i]) flag1=1;
          if(isalpha(str3[i]) && (str2[str3[i]-65]!=str3[l-1-i]) || (isdigit(str3[i]) && str2[str3[i]-48+26]!=str3[l-1-i])) flag2=1;
        }
        if(flag1==1 && flag2==1) cout<<str3<<" -- is not a palindrome.\n\n";
        else if(flag1==0 && flag2==1) cout<<str3<<" -- is a regular palindrome.\n\n";
        else if(flag1==1 && flag2==0) cout<<str3<<" -- is a mirrored string.\n\n";
        else if(flag1==0 && flag2==0) cout<<str3<<" -- is a mirrored palindrome.\n\n";
    }
    return 0;
}
