#include <stdio.h>

double umfang(double r, double pi) {
    return 2 * pi * r;
}

double fläche(double r, double pi) {
    return pi * r * r;
}

int main() {
    double pi, r, u, a;

    printf("Geben Sie ein Radius ein: ");
    scanf("%lf", &r);
    
    pi = 3.1415926535;
    u = umfang(r, pi);
    a = fläche(r, pi);

    printf("Umfang: %lf\n", u);
    printf("Fläche: %lf\n", a);

    return 0;
}
