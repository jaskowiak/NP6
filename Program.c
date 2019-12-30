#include <stdio.h>
#include <stdlib.h>
#include "rek.h"
#include "silnia.h"
#include "wynik.h"
int wynikrek;
int n;

int main() {
    printf("Podaj liczbe z ktorej obliczyc silnie: ");
    scanf("%d",&n);
    printf("\n");
    suma=silniax(n);
    printf("Silnia to: %d",suma/10);
    suma2=silniarek(n);
    printf("\nSilnia liczona rekurencyjnie: %d\n",suma2);

    double wynik2 = (double)n;
    wynik2=silniarekdb(wynik2);
    printf("\nSilnia liczona w double :%f",wynik2);

    double wynik = (double)n;
    wynik=silniarekdb(wynik);
    printf("\nSilnia liczona rekurencyjnie w double :%f\n",wynik);

  /*  float wynik2fl = (float)n;
    wynik2fl=silniaxfl(wynik2fl);
    printf("\nSilnia liczona w float :%fl",wynik2fl);
    float wynikfl = (float)n;
    wynikfl=silniarekfl(wynikfl);
    printf("\nSilnia liczona rekurencyjnie w float :%f",wynikfl);*/

    return 0;

}
