#include<stdio.h>
//#include<conio.h>
typedef struct poder{
           int x,y;
    }nodo;
    nodo a[2000];
    
    
void pon(int numerito,int act )
{
    if(numerito<act)
    {
                   if(a[act].y==0)
                   {
                                  a[act].y=numerito;
                   }
                   else {
                                  pon(numerito,a[act].y);
                        } 
    }
    else {
          if(a[act].x==0)
          {
                         a[act].x=numerito;
          }
          else {
                         pon(numerito,a[act].x);
          }
    }
}   

void imp(int r)
{
     printf("%d ",r);
     if(a[r].y!=0)imp(a[r].y);
     if(a[r].x!=0)imp(a[r].x);
} 
int main()
{
    int n,i,root;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)scanf("%d",&ar[i]);
    root=ar[n-1];
    for(i=n-2;i>=0;i--)
    {
                       pon(ar[i],root);      
    }
    imp(root);
    //getch();
    return 0;
}

