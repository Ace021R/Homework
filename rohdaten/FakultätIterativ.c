#include <stdio.h>

int main() {
    
    int i, n, x=1;
    
printf("geben sie n ein: ");
scanf("%d", &n);

for(i=1; i<=n; i++){
    x =x*i;
}
 printf("Der Fakultät von %d beträgt: %d", n,  x);
}
