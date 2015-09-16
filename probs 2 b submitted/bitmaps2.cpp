#include<iostream>
#include<math.h>
using namespace std;
void set(int,int,int,int,char);
int check(int,int,int,int);
void bitmap(int,int,int,int);
void bitmap1(int,int,int,int);
char map[1000][1000],str[100000];
long long k;
int high(int x)
{
   if(x%2==0) return x/2;
   else return(x/2+1);
}
int low(int x)
{
    return x/2;
}
int main()
{
    char type;
    int row,col,i,j;
    long long m;
    while(cin>>type && type!='#')
    {
        cin>>row>>col;
        m=0;
        cin>>str;
        if(type=='B')
        {
            printf("D%4d%4d\n",row,col);
            for(i=0;i<row;i++)
              for(j=0;j<col;j++)
                map[i][j]=str[m++];
            bitmap(row,col,0,0);
        }
        else 
        {
             printf("B%4d%4d\n",row,col);
             k=-1;
             bitmap1(row,col,0,0);
             for(i=0;i<row;i++) for(j=0;j<col;j++) printf("%c",map[i][j]);
        }
        printf("\n");     
    }
    return 0;
}
void bitmap(int row,int col,int rno,int cno)
{
     int ans;
     if(row==0 || col==0) return;
     else
     {
         ans=check(row,col,rno,cno);
         if(ans==1) printf("1");
         else if(ans==0) printf("0");
         else
         {
            printf("D");
            bitmap(high(row),high(col),rno,cno);
            bitmap(high(row),low(col),rno,cno+high(col));
            bitmap(low(row),high(col),rno+high(row),cno);
            bitmap(low(row),low(col),rno+high(row),cno+high(col));
         }
     }
}
void bitmap1(int row,int col,int rno,int cno)
{
     if(row==0 || col==0) return;
     else
     {
         k++;
         if(str[k]!='\0')
         {
             if(str[k]=='1' || str[k]=='0') set(row,col,rno,cno,str[k]);
             else
             {
                bitmap1(high(row),high(col),rno,cno);
                bitmap1(high(row),low(col),rno,cno+high(col));
                bitmap1(low(row),high(col),rno+high(row),cno);
                bitmap1(low(row),low(col),rno+high(row),cno+high(col));
             }
         }
     }
}
int check(int row,int col,int rno,int cno)
{
    int i,j,count0=0,count1=0;
    for(i=rno;i<rno+row;i++)
    {
      for(j=cno;j<cno+col;j++)
      {
         if(map[i][j]=='0') count0++;
         else if(map[i][j]=='1') count1++;
      }
    }
    if(count0==row*col) return 0;
    else if(count1==row*col) return 1;
    else return -1;
}

void set(int row,int col,int rno,int cno,char c)
{
    int i,j;
    for(i=rno;i<rno+row;i++)
      for(j=cno;j<cno+col;j++)
         map[i][j]=c;
}
