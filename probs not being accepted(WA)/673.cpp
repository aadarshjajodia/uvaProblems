#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
   int n,i,j;
   string s1="[] ()";
   char str[1000];
   cin>>n;
   fflush(stdin);
   for(j=0;j<n;j++)
   {
       int c,a;
       stack<char> stac;
       gets(str);
       if(!strlen(str)) cout<<"Yes\n";
       else
       {
           stac.push(str[0]);
           int l=strlen(str);
           for(i=1;i<l;i++)
           {
               if(stac.empty()) stac.push(str[i++]); //if stack is empty . pushing two elements in the stack thats why i++
               c=s1.find(stac.top());
               stac.push(str[i]);
               a=s1.find(stac.top());
               if((a-c)==1) {stac.pop();stac.pop();}
           }
           if(stac.empty()) cout<<"Yes\n";
           else cout<<"No\n";
       }
   }
   return 0;
}
