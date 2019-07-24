#include<stdio.h>
#include<vector>
//#include<conio.h>
using namespace std;
int pos[1000000],fin[1000000];
vector <int> mat[1000000];
int main()
{
    int m,n,k,p,a,b,i,lugar=0;
    char letra;
    scanf("%d%d%d",&m,&n,&k);
    for(p=0;p<k;p++)
    {
        getchar();
        scanf("%c",&letra);
        if(letra=='F'){                       
            scanf("%d%d",&a,&b);
            mat[b].push_back(a);
            fin[b]++;
        }
        else if(letra=='R'){
            scanf("%d",&b);
            for(i=0;i<fin[b];i++)
            {
                printf("%d\n",mat[b][i]);
                mat[b].pop_back();                         
            }
            fin[b]=0;                 
        }
    }
    return 0;
}
