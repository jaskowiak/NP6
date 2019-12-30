#include <stdio.h>
#include <ctype.h>

int silniarek (int n) {
    if(n==0)
        return 1;
    else return n*silniarek(n-1);
}

double silniarekdb (double n) {
    if(n==0)
        return 1;
    else return n*silniarek(n-1);
}

float silniarekfl (float n) {
    if(n==0)
        return 1;
    else return n*silniarek(n-1);
}
