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

void saveConfiguration(char *s){
    int i;
    FILE *Fconfig;
    Fconfig=fopen("Configuration_ising.dat","wt")
    for (i=0; i<L*L; i++){
        fprintf(f,"%d%c",s[i],(i+1)%L==0?'\n':' ');
    }
}

