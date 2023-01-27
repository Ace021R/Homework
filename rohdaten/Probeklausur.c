#include <stdio.h>

int main() {
    
int preis, restbetrag, anzahl2Euro, anzahl50Cent, anzahl10Cent, anzahl5Cent;
double zuBezahlen;

printf("Geben Sie den preis in Cent ein: ");
scanf("%d", &preis);

    anzahl2Euro = preis / 200;
    restbetrag = preis % 200;
    anzahl50Cent = restbetrag / 50;
    restbetrag = restbetrag % 50;
    anzahl10Cent = restbetrag / 10;
    restbetrag = restbetrag % 10;
    anzahl5Cent = restbetrag / 5;
    restbetrag = restbetrag % 5;

    printf("du kannst mit \n%d   2-Euro-Münzen \n%d   50-Cent-Münzen \n%d   10-Cent-Münzen \n%d   5-Cent-Münzen \nund %d Cent ist als Restbetrag übrig gebliben. ", anzahl2Euro, anzahl50Cent, anzahl10Cent, anzahl5Cent, restbetrag);
    return 0;
}
