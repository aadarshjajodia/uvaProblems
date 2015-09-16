#include<iostream.h>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    unsigned long long int i,p,q,r;
    vector<unsigned long long int> v;
    int count=6;
    for(i=1;i<=6;i++) v.push_back(i);
    while(v.size()<200)
    {
       p=find(v.begin(),v.end(),i/2)-v.begin();
       q=find(v.begin(),v.end(),i/3)-v.begin();
       r=find(v.begin(),v.end(),i/5)-v.begin();
       if((i%2==0 && p>=0 && p<v.size()) || (i%3==0 && q>=0 && q<v.size()) || (i%5==0 && r>=0 && r<v.size())) v.push_back(i);
       i++;
    }
    cout<<v[v.size()-1];
    getch();
    return 0;
}
