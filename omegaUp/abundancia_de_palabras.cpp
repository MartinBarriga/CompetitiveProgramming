#include<stdio.h>
//#include<conio.h>
char ar[10002];
int main()
{
    int i=0,c=0;
    do {
        scanf("%c",&ar[i]);
        i++;
    }while(ar[i-1]!='\n');
    
    i=0;
    
    do {
        if(ar[i]=='C')
        {
                      c++;
                      i+=12;
        }
        i++;
    }while(ar[i-1]!='\n');
    printf("%d",c);
  //  getch();
}