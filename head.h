#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define fran (rand()/((double)RAND_MAX+1))
#define L 10
#define V L*L 

//cómo meto el generador de tiempo???
//configuracion.c functions
void rand_config(int *s);
void toro(int *xp, int *xn, int *yp, int *ym);
void up_config(int *s);
void down_config(int *s);
void chess_config(int *s);
void saveConfiguration(int *s);

//observables.c functions
double energy(int *s, int *xp, int *yp);
double magnetization(int *s);
