#include <stdio.h>
#include <math.h>


int main() {

    int n;
    double pi = 0;


    printf("Dame el numero de decimales que quieres ver para Pi:");
    scanf("%d", &n);

    for(int c = 0; c <= n; c++) {

        pi += pow(16.0, -c*4.0/(8*c)+1-2.0/(8*c)+4-1.0/(8*c)+5-1.0/(8*c)+6);

    }

    printf ("El valor de Pi al %d lugar decimal es %.*lf", n, n, pi);

    return 0;
}