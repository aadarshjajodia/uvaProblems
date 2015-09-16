#include<iostream>
using namespace std;
string pre,in;
int k;
struct node
{
    char data;
    node* left;
    node* right;
}*root=NULL;
node* maketree(int,int);
void postorder(node*);
int main()
{
    int nodes,test;
    cin>>test;
    while(test--)
    {    
        cin>>nodes>>pre>>in;
        k=-1;
        root=maketree(0,in.length()-1);
        postorder(root);
        cout<<"\n";
    } 
}
void postorder(node* t)
{
     if(t!=NULL)
     {
         postorder(t->left);
         postorder(t->right);
         cout<<t->data;
     } 
}
node* maketree(int start,int end)
{
     int t;
     node *p,*temp;
     if(start>end) return NULL;
     else
     {
          k++;
          if(k==pre.length()) return NULL;
          p=(node*)malloc(sizeof(node));
          p->left=NULL;
          p->right=NULL;
          p->data=pre[k];
          t=in.find(pre[k]);
          if(t>0) p->left=maketree(start,t-1); 
          if(t<pre.length()-1) p->right=maketree(t+1,end); 
     }
     return p;
}
