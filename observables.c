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
void med_var(double *datos,int Ndatos,double *media,double *varianza,double *desviacionMedia){
int i;
double suma;double suma2; suma=0; suma2=0;
for(i=0;i<Ndatos;i++){
 suma+=datos[i];
 suma2+= datos[i]*datos[i];
 }
*media = suma / Ndatos;
double Var = (Ndatos * suma2 - suma * suma) / (Ndatos * (Ndatos - 1));
*varianza = Var;
*desviacionMedia = sqrt(Var / Ndatos);
}
//valor absoluto de m
double absMagnetization(int *s){
double m = magnetization(s);
return abs(m);
}

/*función que calcula el valor esperado de la energía y la magnetización*/
//void expected_e_m

 expected_e_m(int *s, Medias*medias){ //hacerlo con parametros para energia y magnetizacion
    for(i=0;i<V;i++){
        double e = energy(s,xp,yp);
        double m = absMagnetization(s);
        double *media_e, *varianza_e, *desviacionMedia_e;
        double *media_m, *varianza_m, *desviacionMedia_m;
        med_var(&e, 1, &media_e, &varianza_e, &desviacionMedia_e);
        med_var(&m, 1, &media_m, &varianza_m, &desviacionMedia_m);
        medias[i].energy = media_e;
        medias[i].magnetization = media_m;
    }
}
/*función que calcule el calor específico*/
//void calcula_C_v

/*función que calcule la susceptibilidad y la susceptibilidad con m absoluto */
//void calcula_X

