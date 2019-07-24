#include "cluedo.h"

void ResolverCaso() {
	int c=1,u=1,a=1,r=1;
	do
    {
        r=Teoria(c,u,a);
        if(r==0) return 0;
        if(r==1) c++;
        else if(r==2)u++;
        else a++;
    }while (r!=0);

}
