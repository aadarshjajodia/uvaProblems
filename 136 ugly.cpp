#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    unsigned long long int i,y;
    vector<unsigned long long int> v;
    for(i=1;i<=5;i++) v.push_back(i);
    for(i=1;i<v.size();i++)
    {
        y=find(v.begin(),v.end(),(v[i]*2))-v.begin();
        if(y<0 || y>=v.size()) {v.push_back(v[i]*2);sort(v.begin(),v.end());}
        if(v.size()==1600) break;
        y=find(v.begin(),v.end(),(v[i]*3))-v.begin();
        if(y<0 || y>=v.size()) {v.push_back(v[i]*3);sort(v.begin(),v.end());}
        if(v.size()==1600) break;
        y=find(v.begin(),v.end(),(v[i]*5))-v.begin();
        if(y<0 || y>=v.size()) {v.push_back(v[i]*5);sort(v.begin(),v.end());}
        if(v.size()==1600) break;
    }
    cout<<"The 1500'th ugly number is "<<v[1499]<<".\n";
    getch();
    return 0;
}
