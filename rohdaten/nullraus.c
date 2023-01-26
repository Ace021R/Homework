#include<stdio.h>

int main () {
  
int i, max, min;
do {
printf("\nBitte geben Sie ein Zahl ein: ");
scanf("%d", &i);
    if (i > max) {
            max = i;
        }
        if (i < min) {
            min = i;
        }
} while( i != 0);
 printf("Das gößte Zahl ist %d und das Kleinste Zahl ist %d", max, min);
  
  return 0;
}
