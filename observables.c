#include "head.h"

double magnetizacion (char *s){
    int i;
    double sum;
    sum=0;
    for (i=0; i<L*L; i++){
        sum=sum+s[i];
    }
    return sum/((double)L*L);
}


