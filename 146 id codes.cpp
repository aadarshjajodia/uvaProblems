#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    int flag;
    while(cin>>str && str!="#")
    {
         flag=1;
         while(next_permutation(str.begin(),str.end()))
         {
              if(str.length()>=1) {flag=0;cout<<str<<"\n";break;}
         }
         if(flag==1) cout<<"No Successor\n";
    }
    return 0;
}
