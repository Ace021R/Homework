#include <stdio.h>

int fibo(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        return (fibo(n-1)+fibo(n-2));
    }
  
}

int main() {
    
    int f0 = 0, f1 = 1, n;
    

    printf("geben sie die Reihe ein:  ");
    scanf("%d", &n);
    printf("%d", fibo(n));
    
    return 0;
}
