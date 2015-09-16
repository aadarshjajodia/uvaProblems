#include<string>
#include<iostream>
using namespace std;
int main()
{
    int i,count=0;
    char str[10000];
    scanf("%[^^Z]",str);
    string s(str);
    for(i=0;i<s.length();i++)
        if(s[i]=='"') 
        {
                 count++;
                 if(count%2!=0) s.replace(i,1,"``");
                 else if(count%2==0) s.replace(i,1,"''");
        }     
    cout<<s;
    return 0;
}
