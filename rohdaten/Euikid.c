#include <stdio.h>

int funk(int zahl1, int zahl2) {
    if (zahl1 == zahl2) 
        return zahl1;
        else if (zahl1 > zahl2)
            return funk(zahl1-zahl2, zahl1);
            else {
                return funk(zahl2, zahl2-zahl1);
            }
            }
       


int main() {
    
    int zahl1, zahl2, one;
    

    printf("geben sie das erste Zahl ein:  ");
    scanf("%d", &zahl1);
    printf("geben sie das zweite Zahl ein:  ");
    scanf("%d", &zahl2);
    printf("%d", funk(zahl1, zahl2));
    
    return 0;
}
