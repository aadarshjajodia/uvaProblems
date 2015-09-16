#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
   int n,i,j;
   string s1="[] ()",str;
   cin>>n;
   for(j=0;j<n;j++)
   {
       int c,a;
       stack<char> stac;
       scanf("\n");
       getline(cin,str);
       stac.push(str[0]);
       for(i=1;i<str.size();i++)
       {
           if(stac.empty()) stac.push(str[i++]);
           c=s1.find(stac.top());
           stac.push(str[i]);
           a=s1.find(stac.top());
           if((a-c)==1) {stac.pop();stac.pop();}
       }
       if(stac.empty()) cout<<"Yes\n";
       else cout<<"No\n";
   }
   return 0;
}
