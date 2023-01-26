#include<stdio.h>

int main () {
    int radius;
    float pi;
    
    printf("Geben Sie das radius des Kreises ein: ");
    scanf("%d", &radius);
    
    pi = 3.1415926535;
    
    printf("Sie haben einen Flächeninhalt von %.2lf m2", pi*radius*radius);
}
