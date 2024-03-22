#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define fran() (rand()/((double)RAND_MAX+1))
#define L 10
#define V L*L 

int xp[L],xn[L],yp[L],yn[L];
char s[V];
char s_inicial;
char s_final;
int E_i;
int E_f;
int n;
double beta;
int Naceptados;
int Ind;
void random_config (int *s);
void toro(int *xp, int *xn, int *yp, int *yn);
void up_config (int *s);
void down_config (int *s);
double energy (int *s, int *xp, int *yp);
double magnetization (int *s);
void saveConfiguration(int *s);
void sweep(int n, double x, double y);
int sum[5] = {4, -4, 2, -2, 0};
int dif[5]= {8,4,0,-4,-8};
double Prob[5]; int i;

