#include<stdio.h>

int main () {
  
  int zahl1, zahl2;
  
    printf("Geben Sie das erste Zahl ein");
    scanf("%d", &zahl1);

    printf("Geben Sie das zweite Zahl ein");
    scanf("%d", &zahl2);

if(zahl1>zahl2){
    printf("Das erste Zahl %d ist größer als das Zahl zwei %d", zahl1, zahl2);
    }else if(zahl1<zahl2){
        printf("Das Zweite Zahle %d ist Größer als Zahl zwei %d ", zahl2, zahl1);
        }else if(zahl1==zahl2){
            printf("Beide Zahlen sind Gleich");
        }
 return 0;
}
