#include "head.h"
void toro(int *xp, int *xn, int *yp, int *ym)
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
        ym[i]=-L;
    }
    xn[0]=-(L-1);
    ym[0]=(int)L*(L-1); 
}
void rand_config(int *s)
{
    int i; 
    for (i=0;i<V;i++)
    {
        if(fran<0.5) s[i]=1;
        else s[i]=-1;
    }
}
void up_config(int *s)
{
    int i;
    for(i=0;i<V;i++)
    {
        s[i]=1;
    }
}

void down_config(int *s)
{
    int i;
    for(i=0;i<L*L;i++)
    {
        s[i]=-1;
    } 
}

void chess_config(int *s) 
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

void saveConfiguration(int *s){
    int i;
    FILE *Fconfig;
    Fconfig=fopen("config.dat","wt");
    for (i=0; i<L*L; i++){
        fprintf(Fconfig,"%d%c",s[i],(i+1)%L==0?'\n':' ');
    }
    fclose(Fconfig);
}