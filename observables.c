#include "head.h"
double magnetization (int *s){
    int i;
    double sum;
    sum=0.0;
    for (i=0; i<V; i++){
        sum+=s[i];
    }
    return sum/V;
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
    return (double)(-1.0/(2.0*V))*energia; //energía intensiva
}
/*función que calcula la media y la varianza de una serie de datos*/
//double med_var

//valor absoluto de m

/*función que calcula el valor esperado de la energía y la magnetización*/
//void expected_e_m

/*función que calcule el calor específico*/
//void calcula_C_v

/*función que calcule la susceptibilidad y la susceptibilidad con m absoluto */
//void calcula_X

