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
void random_config (char *s)
{
    int i; 
    for (i=0;i<L*L;i++)
    {
        if(fran()<0.5) s[i]=1;
        else s[i]=-1;
    }
}

void up_config (char *s)
{
    int i;
    for(i=0;i<L*L;i++)
    {
        s[i]=1;
    }
}

void down_config (char *s)
{
    int i;
    for(i=0;i<L*L;i++)
    {
        s[i]=-1;
    } 
}

void chess_config (char *s) 
{
    int i,j,n; 
    for (i=0;i<L;i++)
    {
        for (j=0;j<L;j++)
        {
            s[i+n*j]=pow(-1,j+i); 
        }
        n++; 
    }
}
