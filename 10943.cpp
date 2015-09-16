#include<iostream>
#define MOD 1000000 
using namespace std;
int arr[101][101];
int main()
{
    int i,j,a,b;
    for(i=0;i<101;i++) {arr[1][i]=i;arr[i][1]=1;}
    for(i=2;i<101;i++)
      for(j=2;j<101;j++)
         arr[i][j]=(arr[i-1][j]%MOD+arr[i][j-1]%MOD)%MOD;
    while(cin>>a>>b && (a!=0 || b!=0)) cout<<arr[a][b]<<"\n";    
    return 0;
}
