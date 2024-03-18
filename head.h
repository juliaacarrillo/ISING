#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define fran() (rand()/((double)RAND_MAX+1))
#define L 10
#define V L*L 

int xp[L],xn[L],yp[L];
int ym[L];
char s[V];

void random_config (char *s);
void toro(int *xp, int *xn, int *yp, int *ym);
void up_config (char *s);
void down_config (char *s);
double energy (char *s, int *xp, int *yp);
double magnetization (char *s);
void saveConfiguration(char *s);