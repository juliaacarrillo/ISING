#include "head.h"
void toro (int *xp, int *xn, int *yp, int *yn)
{
    int i; 
    for(i=0;i<L-1;i++)
    {
        xp[i]=1;
        yp[i]=L;
    }
    xp[L-1]=-(L-1);
    yp[L-1]=-L*(L-1); 
    for(i=1;i<L;i++)
    {
        xn[i]=-1;
        yn[i]=-L;
    }
    xn[0]=-(L-1);
    yp[0]=-L*(L-1); 
}

