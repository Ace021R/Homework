#include <stdio.h>

int fak(int n){
    if(n<0)
        return -1;
    else if(n == 0)
        return 1;
    else
        return n*fak(n-1);
}



int main() {
    int n, result;
    
    printf("gib einen Wert ein:  ");
    scanf("%d", &n);
    
    result = fak(n);
    
    printf("Fakultät von %d = %d ", n, result);
    
  return 0;
}
