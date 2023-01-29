#include<stdio.h>

int main () {
    int netto;
    printf("netto: ");
    scanf("%d", &netto);
    double Brutto = netto*1.19;
    printf("Brutto: %.2f", Brutto);
    
    return 0;
}
