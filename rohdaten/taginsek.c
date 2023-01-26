#include<stdio.h>

int main () {
    int tag;
    int h = 24, m = 60, s =60;
    
    printf("Geben die Anzahl der Tage die sie umrechnen wollen ");
    scanf("%d", &tag);
    
    printf("Die tage %d sind umgerechnet in Stunden %d, in Minuten %d und in sekunden %d", tag, tag*h, tag*h*m, tag*h*m*s);
  
  return 0;
}

