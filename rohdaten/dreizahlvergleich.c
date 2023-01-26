#include<stdio.h>

int main () {
  
  int zahl1, zahl2, zahl3;
  
    printf("Geben Sie das erste Zahl ein");
    scanf("%d", &zahl1);

    printf("Geben Sie das zweite Zahl ein");
    scanf("%d", &zahl2);
    
    printf("Geben Sie das dritte Zahl ein");
    scanf("%d", &zahl3);

if(zahl1>zahl2 && zahl1>zahl3){
    printf("Das erste Zahl %d ist größer als das Zahl zwei %d und der Zahl drei %d  ", zahl1, zahl2, zahl3);
    }else if(zahl2>zahl1 && zahl2>zahl3){
        printf("Das Zweite Zahle %d ist Größer als Zahl eins %d und der zahl drei %d   ", zahl2, zahl1, zahl3);
        }else if(zahl3>zahl1 && zahl3>zahl2){
            printf("Das dritte Zahle %d ist Größer als Zahl eins %d und der zahl zwei %d   ", zahl3, zahl1, zahl2);
        }
 return 0;
}
