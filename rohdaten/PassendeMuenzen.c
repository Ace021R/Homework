#include <stdio.h>

int main() {
    
    int preis, restbetrag;
    int munzen[] = {200, 50, 10, 5};
    int anzahlMunzen[] = {0, 0, 0, 0};
    
    printf("Geben Sie den preis in Cent ein: ");
    scanf("%d", &preis);
    
        restbetrag = preis;
            for (int i = 0; i < 4; i++) {
                anzahlMunzen[i] = restbetrag / munzen[i];
                restbetrag %= munzen[i];
            }
            
    printf("du kannst mit \n%d 2-Euro-Münzen \n%d 50-Cent-Münzen \n%d 10-Cent-Münzen \n%d 5-Cent-Münzen \nund %d Cent ist als Restbetrag übrig gebliben. ", anzahlMunzen[0], anzahlMunzen[1], anzahlMunzen[2], anzahlMunzen[3], restbetrag);
return 0;
}
