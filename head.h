#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define fran (rand()/((double)RAND_MAX+1))
#define L 10
#define V L*L 


void random_config (int *s);
void toro(int *xp, int *xn, int *yp, int *yn);
void up_config (int *s);
void down_config (int *s);
double energy (int *s, int *xp, int *yp);
double magnetization (int *s);
void saveConfiguration(int *s);
void sweep(int n, double x, double y);

//configuracion.c functions
void rand_config(int *s);
void toro(int *xp, int *xn, int *yp, int *yn);
void up_config(int *s);
void down_config(int *s);
void chess_config(int *s);
void saveConfiguration(int *s);

//observables.c functions
double energy(int *s, int *xp, int *yp);
double magnetization(int *s);
//void expected_e_m(int *s,int Ndatos, double *media_e, double *media_m, double *desv_e, double *desv_m, double *var_e, double *var_m,int *xp, int *yp);
void med_var(double *datos,int Ndatos,double *media,double *varianza,double *desviacionMedia);
double absMagnetization(int *s);
