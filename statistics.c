#include "head.h"

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

/*función que calcula el valor esperado de la energía y la magnetización*/
//void expected_e_m
/*void expected_e_m(int *s,int Ndatos, double *media_e, double *media_m, double *desv_e, double *desv_m, double *var_e, double *var_m,int *xp, int *yp){
    int i;
    for(i=0;i<V;i++){
        double e = energy(s,xp,yp);
        double m = absMagnetization(s);
        double med_e,med_m,v_e,v_m,d_e,d_m;
        med_var(e, Ndatos, &med_e, &v_e, &d_e);
        med_var(m, Ndatos, &med_m, &v_m, &d_m);
        *media_e=med_e;
        *media_m=med_m;
        *var_e=v_e;
        *var_m=v_m;
        *desv_e=d_e;
        *desv_m=d_m;
    }
}*/

/*función que calcule el calor específico*/
//void calcula_C_v

/*función que calcule la susceptibilidad y la susceptibilidad con m absoluto */
//void calcula_X
