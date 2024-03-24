#include "head.h"

int main()
{
    int xp[L],xn[L],yp[L],yn[L];
    int s[V];
    double e;
    up_config(s);
    saveConfiguration(s);
    toro(xp,xn,yp,yn);
    e=energy(s,xp,yp);
    printf("%f\n",e);
    return 0;
}
