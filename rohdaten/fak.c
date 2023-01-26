#include<stdio.h>

int main () {

int i, n, x=1;
printf("geben sie einen zahl ein: \n");
scanf("%d", &n);

    for(i = 1; i<=n; i++){
        x=x*i;
    }
    
printf("%d", x);
  
  return 0;
}
