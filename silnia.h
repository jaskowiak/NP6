#include <stdio.h>
#include <ctype.h>

int silniax(int n) {
    int i;
    int suma;
    for (i=1;i<=n;i++){
        suma=suma*i;
    }
    return suma;
}

double silniaxdb(double n) {
    int i;
    double suma;
    for (i=1;i<=n;i++){
        suma=suma*i;
    }
    return suma;
}

float silniaxfl(float n) {
    int i;
    float suma;
    for (i=1;i<=n;i++){
        suma=suma*i;
    }
    return suma;
}
