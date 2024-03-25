#include "head.h"
double magnetization (int *s){
    int i;
    double sum;
    sum=0.0;
    for (i=0; i<V; i++){
        sum+=s[i];
    }
    return sum/((double) V);
}

double energy (int *s, int *xp, int *yp){
    int n;
    double energia;
    energia=0;
    n=0;
    int j;
    int i;
    for(j=0;j<L;j++){
        for(i=0;i<L;i++){
            energia+=s[n]*(s[n+xp[i]]+s[n+yp[i]]);
            n++;
        }
    }
    return energia/(2.0*V); //energía intensiva
}


double absMagnetization(int *s){
double m = magnetization(s);
return abs(m);
}


