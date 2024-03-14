#include "head.h"
double magnetization (char *s){
    int i;
    double sum;
    sum=0;
    for (i=0; i<L*L; i++){
        sum=sum+s[i];
    }
    return sum/((double)L*L);
}

double energy (char *s){
    int n;
    double energia;
    energia=0;
    n=0;
    int j;
    int i;
    for(j=0;j<L;j++){
        for(i=0;i<L;i++){
            energia+=s[n]*(s[n+xp[i]]+s[n+yp[i]]);7
            n++;
        }
    }

    return energia;

}
