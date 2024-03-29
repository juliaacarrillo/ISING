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
double suma,suma2,Var; 
suma=suma2=0.0;
for(i=0;i<Ndatos;i++){
 suma+=datos[i];
 suma2+= datos[i]*datos[i];
 }
*media = suma / Ndatos;
Var = (Ndatos * suma2 - suma * suma) / (Ndatos * (Ndatos - 1));
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
// definida con parametros, se puede extender y de aqui calcular la varianza y la desviacion
Parameters*expected_e_m(int *s){ 
        double e = energy(s,xp,yp);
        double m = absMagnetization(s);
        double *media_e, *varianza_e, *desviacionMedia_e;
        double *media_m, *varianza_m, *desviacionMedia_m;
        med_var(&e, 1, &media_e, &varianza_e, &desviacionMedia_e);
        med_var(&m, 1, &media_m, &varianza_m, &desviacionMedia_m);
        Parameters* Medias_e_m = malloc(sizeof(Parameters));
        Medias_e_m->energy = media_e;
        Medias_e_m->magnetitazion = media_m;
        return Medias_e_m;
}

/*función que calcule el calor específico, es la derivada de la energia respecto de beta, definir la funcion de particion*/
//void calcula_C_v 

/*función que calcule la susceptibilidad y la susceptibilidad con m absoluto */
//void calcula_X

